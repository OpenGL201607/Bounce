#include "bounce.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Bounce w;
	w.show();
	return a.exec();
}
