#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     Q_INIT_RESOURCE(images);
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
