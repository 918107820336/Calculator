#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setFixedSize(600,400);
    w.setWindowTitle("计算器");
    w.myLayout();
    return a.exec();
}
