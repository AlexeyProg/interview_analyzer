#include "window.h"


MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent)
{
    prepare();
}

void MainWindow::prepare()
{
    this->setGeometry(100,100,1000,500);
    this->setWindowTitle("Analyzer");
}

MainWindow::~MainWindow()
{
    delete this;
}