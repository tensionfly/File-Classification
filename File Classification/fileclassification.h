#ifndef FILECLASSIFICATION_H
#define FILECLASSIFICATION_H

#include <QtWidgets/QMainWindow>
#include "ui_fileclassification.h"
#include "QFileDialog"
#include <QProcess>
#include <QProgressDialog>
#include <QtWidgets>

class FileClassification : public QMainWindow
{
	Q_OBJECT

public:
	FileClassification(QWidget *parent = 0);
	~FileClassification();

private slots:
	void gpu_status_detect();
	void cup_status_detect();

	void open_file();
	void open_tz();
	void out_file();

	void process_dir();
	void onFinished(int exitCode);
	//void updateProgressDialog();

private:
	Ui::FileClassificationClass ui;
	/*QString path;
	QString path_tz;
	QString out_path;*/
	QString device;

	//int currentValue;
	//QProgressDialog* progDlg;
	//QTimer* timer;

};

#endif // FILECLASSIFICATION_H
