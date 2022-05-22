#include "mainwindow.h"

#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    MainWindow window;
    window.show();

    return app.exec();


}
