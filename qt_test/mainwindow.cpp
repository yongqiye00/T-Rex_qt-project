#include "mainwindow.h"

#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("yongqiye"));

    openAction = new QAction(QIcon(":/images/RedCat"),tr("&Open..."),this);
    openAction->setShortcuts(QKeySequence::Open);//快捷键
    openAction->setStatusTip(tr("Open an existing file"));

    QAction* mz = new QAction(QIcon(":/images/mz"),tr("&Edit..."),this);
    mz->setStatusTip(tr("Edit..."));

    QAction* wqr=new QAction(QIcon(":/images/wqr"),tr("&Help..."),this);
    wqr->setStatusTip(tr("Help..."));
    QLabel ql;
    ql.show();
    connect(openAction,&QAction::triggered,this,&MainWindow::open);

    QMenu *file=menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    //file->addAction(mz);
    //file->addAction(wqr);
    QToolBar *toolBar=addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    QToolBar *toolBar2=addToolBar(tr("&Edit"));
    toolBar2->addAction(mz);

    QToolBar* toolBar3=addToolBar(tr("&Help"));
    toolBar3->addAction(wqr);
    statusBar();
}

MainWindow::~MainWindow()
{
}

void MainWindow::open(){
    QMessageBox::information(this, tr("information"),tr("Open"));
}
