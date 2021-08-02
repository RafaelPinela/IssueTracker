#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtPlugin>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << "Test";
    return a.exec();
}
