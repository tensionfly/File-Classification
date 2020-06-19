#include "fileclassification.h"

//#include <string>
//using namespace std;
//void FileClassification::updateProgressDialog()
//{
//	currentValue++;
//	if (currentValue == 100)
//		currentValue = 0;
//	progDlg->setValue(currentValue);
//	QCoreApplication::processEvents();//避免界面冻结
//	if (progDlg->wasCanceled())
//		progDlg->setHidden(true);//隐藏对话框
//}

void FileClassification::gpu_status_detect()
{
	bool status;
	status = ui.action_GPU->isChecked();

	ui.action_CPU->setChecked(!status);
}

void FileClassification::cup_status_detect()
{
	bool status;
	status = ui.action_CPU->isChecked();

	ui.action_GPU->setChecked(!status);
}

void FileClassification::open_file()
{
	QString srcDirPath = QFileDialog::getExistingDirectory(
		this, "choose Directory",
		"/");

	if (srcDirPath.isEmpty())
	{
		return;
	}
	else
	{
		ui.plainTextEdit->setPlainText(srcDirPath + "/");
		//path = srcDirPath+"/";
	}

}

void FileClassification::open_tz()
{
	QString fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("选择输入台账"), "/", "Excel File(*.xls *.xlsx)");//(*.xls,*.xlsx)

	if (fileName.isEmpty())
	{
		return;
	}
	else
	{
		ui.plainTextEdit_4->setPlainText(fileName);

	}

}

void FileClassification::out_file()
{
	QString srcDirPath = QFileDialog::getExistingDirectory(
		this, "choose Directory",
		"/");

	if (srcDirPath.isEmpty())
	{
		return;
	}
	else
	{
		ui.plainTextEdit_3->setPlainText(srcDirPath + "/");
		//path = srcDirPath+"/";
	}

}

void FileClassification::process_dir()
{
	QString inputfile = ui.plainTextEdit->toPlainText();
	QString tzfile = ui.plainTextEdit_4->toPlainText();
	QString outputfile = ui.plainTextEdit_3->toPlainText();

	//bool a = tzfile.isEmpty();
	//qDebug << tzfile;
	//ui.plainTextEdit_2->setPlainText(tzfile);
	//ui.plainTextEdit_2->setPlainText(outputfile);
	/*for (int i = 0; i < 100; ++i){
		ui.plainTextEdit_2->appendPlainText(QString::number(i));
	}*/

	if (inputfile.isEmpty())
	{
		ui.plainTextEdit_2->appendPlainText(QString::fromLocal8Bit("请先选择输入路径，再点击处理按钮！"));
	}
	if (outputfile.isEmpty())
	{
		ui.plainTextEdit_2->appendPlainText(QString::fromLocal8Bit("请先选择输出路径，再点击处理按钮！"));
	}

	if (!inputfile.isEmpty() && !outputfile.isEmpty())
	{	
		this->setEnabled(false);

		ui.plainTextEdit_2->setPlainText(QString::fromLocal8Bit("开始处理！请稍等......"));
		bool GPU_status;
		GPU_status = ui.action_GPU->isChecked();

		if (!GPU_status)
			device = "cpu";
		else
			device = "gpu";

		//QString path_exe="F:/fenzuexe/test_net_tesseract/test_net.exe";
		QString path_exe = "file_ocr.exe";
		QProcess *pro = new QProcess(this);
		//pro->setWorkingDirectory("F:/fenzuexe/test_net_tesseract/");

		//real time output
		QObject::connect(pro, &QProcess::readyRead, [=]() {
			QTextCodec *codec = QTextCodec::codecForName("GBK");
			QString dir = codec->toUnicode(pro->readAll());
			ui.plainTextEdit_2->setPlainText(dir);
		});

		if (tzfile.isEmpty())
			pro->start(path_exe, QStringList() << inputfile << outputfile);
		else
			pro->start(path_exe, QStringList() << inputfile << outputfile << "-txt_path" << tzfile);
		//pro->start(path_exe, QStringList() << "--help");
		connect(pro, SIGNAL(finished(int)), SLOT(onFinished(int)));

		//pro->waitForStarted();
		//pro->waitForFinished();
	}

}

void FileClassification::onFinished(int exitCode)
{
	ui.plainTextEdit_2->appendPlainText(QString::fromLocal8Bit("处理完成!"));
	this->setEnabled(true);
}

FileClassification::FileClassification(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.action_GPU->setChecked(false);
	ui.action_CPU->setChecked(true);

	connect(ui.action_GPU, SIGNAL(triggered()), this, SLOT(gpu_status_detect()));
	connect(ui.action_CPU, SIGNAL(triggered()), this, SLOT(cup_status_detect()));

	connect(ui.action_open, SIGNAL(triggered()), this, SLOT(open_file()));
	connect(ui.action_tz, SIGNAL(triggered()), this, SLOT(open_tz()));
	connect(ui.action_out, SIGNAL(triggered()), this, SLOT(out_file()));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(process_dir()));

	//connect(timer, SIGNAL(timeout()), this, SLOT(updateProgressDialog()));

}

FileClassification::~FileClassification()
{

}
