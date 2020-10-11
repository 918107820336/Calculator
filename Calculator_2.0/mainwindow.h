#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QtCore/qmath.h>
#include <cmath>
#include <QVector>
#include <QStack>
#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    double result;
    bool flag;                           //标识上一个输入是数字还是字符
    char transport;
    QVector<double> num;
    int operat;                          //标识科学运算的方法
    QStack <char> st;

    QLineEdit *data;
    QPushButton *button_0;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_A;
    QPushButton *button_B;
    QPushButton *button_C;
    QPushButton *button_D;
    QPushButton *button_E;
    QPushButton *button_F;
    QPushButton *button_ce;
    QPushButton *button_add;
    QPushButton *button_sub;
    QPushButton *button_mul;
    QPushButton *button_div;
    QPushButton *button_result;
    QPushButton *button_bin;
    QPushButton *button_oct;
    QPushButton *button_hex;

    QPushButton *button_log;

    QPushButton *button_lkuo ;
    QPushButton *button_rkuo ;

    QString s,str;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void myLayout();
    void operation();
    void readNum(char c);
    void init_data();
    void replace(QString str,int i,double &num);
    double opt(double a,double b,char c);
    bool compare(char a,char b);
private slots:
    void button_0_clicked();
    void button_1_clicked();
    void button_2_clicked();
    void button_3_clicked();
    void button_4_clicked();
    void button_5_clicked();
    void button_6_clicked();
    void button_7_clicked();
    void button_8_clicked();
    void button_9_clicked();
    void button_ce_clicked();
    void button_result_clicked();
    void button_mul_clicked();
    void button_div_clicked();
    void button_add_clicked();
    void button_sub_clicked();
    void button_bin_clicked();
    void button_oct_clicked();
    void button_hex_clicked();
    void button_A_clicked();
    void button_B_clicked();
    void button_C_clicked();
    void button_D_clicked();
    void button_E_clicked();
    void button_F_clicked();
    void button_log_clicked();
    void button_lkuo_clicked();
    void button_rkuo_clicked();
};


#endif // MAINWINDOW_H
