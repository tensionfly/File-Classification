#include "fileclassification.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FileClassification w;
	w.show();
	return a.exec();
}
