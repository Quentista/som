#include <QApplication>
#include <Som.h>

int main (int argc, char** argv)
{
	QApplication app (argc, argv);
	
	Som som;
	som.resize(800, 800);
	som.show();
	return app.exec();
}
