#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel l("Hello,world!");
    l.show();
    return a.exec();
}
