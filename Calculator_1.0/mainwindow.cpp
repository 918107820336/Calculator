#include "mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QtCore/qmath.h>
#include <cmath>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

void MainWindow::myLayout(){
    QWidget *centerWindow = new QWidget;
    this->setCentralWidget(centerWindow);

    s = "";
    init_data();
    data = new QLineEdit("");

    button_0 = new QPushButton("0");
    button_1 = new QPushButton("1");
    button_2 = new QPushButton("2");
    button_3 = new QPushButton("3");
    button_4 = new QPushButton("4");
    button_5 = new QPushButton("5");
    button_6 = new QPushButton("6");
    button_7 = new QPushButton("7");
    button_8 = new QPushButton("8");
    button_9 = new QPushButton("9");
    button_ce = new QPushButton("清零");
    button_add = new QPushButton("+");
    button_sub = new QPushButton("-");
    button_mul = new QPushButton("*");
    button_div = new QPushButton("/");
    button_result = new QPushButton("=");
    button_bin = new QPushButton("bin");
    button_oct = new QPushButton("oct");
    button_hex = new QPushButton("hex");
    button_A = new QPushButton("A");
    button_B = new QPushButton("B");
    button_C = new QPushButton("C");
    button_D = new QPushButton("D");
    button_E = new QPushButton("E");
    button_F = new QPushButton("F");
    button_log = new QPushButton("log");
    button_exp = new QPushButton("exp");
    button_sin = new QPushButton("sin");
    button_cos = new QPushButton("cos");
    button_tan = new QPushButton("tan");
    button_gcd = new QPushButton("最大公约数");
    button_lcm = new QPushButton("最小公倍数");
    button_lkuo = new QPushButton("(");
    button_rkuo = new QPushButton(")");

    data->setFixedHeight(30);
    button_0->setMinimumHeight(50);
    button_1->setMinimumHeight(50);
    button_2->setMinimumHeight(50);
    button_3->setMinimumHeight(50);
    button_4->setMinimumHeight(50);
    button_5->setMinimumHeight(50);
    button_6->setMinimumHeight(50);
    button_7->setMinimumHeight(50);
    button_8->setMinimumHeight(50);
    button_9->setMinimumHeight(50);
    button_ce->setMinimumHeight(50);
    button_add->setMinimumHeight(50);
    button_sub->setMinimumHeight(50);
    button_mul->setMinimumHeight(50);
    button_div->setMinimumHeight(50);
    button_A->setMinimumHeight(50);
    button_B->setMinimumHeight(50);
    button_C->setMinimumHeight(50);
    button_D->setMinimumHeight(50);
    button_E->setMinimumHeight(50);
    button_F->setMinimumHeight(50);
    button_bin->setMinimumHeight(50);
    button_oct->setMinimumHeight(50);
    button_hex->setMinimumHeight(50);
    button_result->setMinimumHeight(50);
    button_log -> setMinimumHeight(50);
    button_exp -> setMinimumHeight(50);
    button_sin -> setMinimumHeight(50);
    button_cos -> setMinimumHeight(50);
    button_tan -> setMinimumHeight(50);
    button_gcd -> setMinimumHeight(50);
    button_lcm -> setMinimumHeight(50);


    //连接信号
    connect(button_0,SIGNAL(clicked(bool)),this,SLOT(button_0_clicked()));
    connect(button_1,SIGNAL(clicked(bool)),this,SLOT(button_1_clicked()));
    connect(button_2,SIGNAL(clicked(bool)),this,SLOT(button_2_clicked()));
    connect(button_3,SIGNAL(clicked(bool)),this,SLOT(button_3_clicked()));
    connect(button_4,SIGNAL(clicked(bool)),this,SLOT(button_4_clicked()));
    connect(button_5,SIGNAL(clicked(bool)),this,SLOT(button_5_clicked()));
    connect(button_6,SIGNAL(clicked(bool)),this,SLOT(button_6_clicked()));
    connect(button_7,SIGNAL(clicked(bool)),this,SLOT(button_7_clicked()));
    connect(button_8,SIGNAL(clicked(bool)),this,SLOT(button_8_clicked()));
    connect(button_9,SIGNAL(clicked(bool)),this,SLOT(button_9_clicked()));
    connect(button_bin,SIGNAL(clicked(bool)),this,SLOT(button_bin_clicked()));
    connect(button_oct,SIGNAL(clicked(bool)),this,SLOT(button_oct_clicked()));
    connect(button_hex,SIGNAL(clicked(bool)),this,SLOT(button_hex_clicked()));
    connect(button_A,SIGNAL(clicked(bool)),this,SLOT(button_A_clicked()));
    connect(button_B,SIGNAL(clicked(bool)),this,SLOT(button_B_clicked()));
    connect(button_C,SIGNAL(clicked(bool)),this,SLOT(button_C_clicked()));
    connect(button_D,SIGNAL(clicked(bool)),this,SLOT(button_D_clicked()));
    connect(button_E,SIGNAL(clicked(bool)),this,SLOT(button_E_clicked()));
    connect(button_F,SIGNAL(clicked(bool)),this,SLOT(button_F_clicked()));
    connect(button_add,SIGNAL(clicked(bool)),this,SLOT(button_add_clicked()));
    connect(button_sub,SIGNAL(clicked(bool)),this,SLOT(button_sub_clicked()));
    connect(button_mul,SIGNAL(clicked(bool)),this,SLOT(button_mul_clicked()));
    connect(button_div,SIGNAL(clicked(bool)),this,SLOT(button_div_clicked()));
    connect(button_ce,SIGNAL(clicked(bool)),this,SLOT(button_ce_clicked()));
    connect(button_result,SIGNAL(clicked(bool)),this,SLOT(button_result_clicked()));
    connect(button_log,SIGNAL(clicked(bool)),this,SLOT(button_log_clicked()));
    connect(button_exp,SIGNAL(clicked(bool)),this,SLOT(button_exp_clicked()));
    connect(button_sin,SIGNAL(clicked(bool)),this,SLOT(button_sin_clicked()));
    connect(button_cos,SIGNAL(clicked(bool)),this,SLOT(button_cos_clicked()));
    connect(button_tan,SIGNAL(clicked(bool)),this,SLOT(button_tan_clicked()));
    connect(button_gcd,SIGNAL(clicked(bool)),this,SLOT(button_gcd_clicked()));
    connect(button_lcm,SIGNAL(clicked(bool)),this,SLOT(button_lcm_clicked()));
    connect(button_lkuo,SIGNAL(clicked(bool)),this,SLOT(button_lkuo_clicke()));

    QGridLayout * layout = new QGridLayout;

    layout->addWidget(data,1,1,1,4,Qt::Alignment());

    layout->addWidget(button_1,2,1,Qt::Alignment());
    layout->addWidget(button_2,2,2,Qt::Alignment());
    layout->addWidget(button_3,2,3,Qt::Alignment());
    layout->addWidget(button_add,2,4,Qt::Alignment());

    layout->addWidget(button_4,3,1,Qt::Alignment());
    layout->addWidget(button_5,3,2,Qt::Alignment());
    layout->addWidget(button_6,3,3,Qt::Alignment());
    layout->addWidget(button_sub,3,4,Qt::Alignment());

    layout->addWidget(button_7,4,1,Qt::Alignment());
    layout->addWidget(button_8,4,2,Qt::Alignment());
    layout->addWidget(button_9,4,3,Qt::Alignment());
    layout->addWidget(button_mul,4,4,Qt::Alignment());


    layout->addWidget(button_0,5,1,Qt::Alignment());
    layout->addWidget(button_A,5,2,Qt::Alignment());
    layout->addWidget(button_B,5,3,Qt::Alignment());
    layout->addWidget(button_div,5,4,Qt::Alignment());

    layout->addWidget(button_C,6,1,Qt::Alignment());
    layout->addWidget(button_D,6,2,Qt::Alignment());
    layout->addWidget(button_E,6,3,Qt::Alignment());
    layout->addWidget(button_log,6,4,Qt::Alignment());

    layout->addWidget(button_F,7,1,Qt::Alignment());
    layout->addWidget(button_ce,7,2,Qt::Alignment());
    layout->addWidget(button_result,7,3,Qt::Alignment());
    layout -> addWidget(button_exp,7,4,Qt::Alignment());


    layout->addWidget(button_bin,8,1,Qt::Alignment());
    layout->addWidget(button_oct,8,2,Qt::Alignment());
    layout->addWidget(button_hex,8,3,Qt::Alignment());
    layout->addWidget(button_gcd,8,4,Qt::Alignment());

    layout->addWidget(button_sin,9,1,Qt::Alignment());
    layout->addWidget(button_cos,9,2,Qt::Alignment());
    layout->addWidget(button_tan,9,3,Qt::Alignment());
    layout->addWidget(button_lcm,9,4,Qt::Alignment());

    layout->addWidget(button_lkuo,10,1,Qt::Alignment());

    layout->setMargin(15);
    centerWindow->setLayout(layout);
}

MainWindow::~MainWindow()
{

}

void MainWindow::init_data()
{
    num1 = 0;
    num2 = 0;
    operat_flag = 0;
}

void MainWindow::replace(QString str, int i, double &num)
{
    if(str == "0") num = i*num + 0;
    if(str == "1") num = i*num + 1;
    if(str == "2") num = i*num + 2;
    if(str == "3") num = i*num + 3;
    if(str == "4") num = i*num + 4;
    if(str == "5") num = i*num + 5;
    if(str == "6") num = i*num + 6;
    if(str == "7") num = i*num + 7;
    if(str == "8") num = i*num + 8;
    if(str == "9") num = i*num + 9;
    if(str == "A") num = i*num + 10;
    if(str == "B") num = i*num + 11;
    if(str == "C") num = i*num + 12;
    if(str == "D") num = i*num + 13;
    if(str == "E") num = i*num + 14;
    if(str == "F") num = i*num + 15;
}

double MainWindow::gcd(double num1, double num2)
{
    int big = num1>num2?num1:num2;
    int small = num1<=num2?num1:num2;
    int c;
    while(1){
        c = big%small;
        if(c == 0) break;
        big = small;
        small = c;
    }
    return small;
}

void MainWindow::readNum(char c)
{
    double num = 0;
    int length = s.length() -1;
    if(c>='0'&&c<='9'){
      num = c-48;
      if(operat_flag == 0){
          num1 = num1 * 10 + num;
      }

      else{
          num2 = num2 * 10 + num;
      }
    }
    if(c == 'b'){
        for(int i= 0 ;i < length ;i++){
            replace(s.mid(i,1),2,num);
        }
        if(operat_flag == 0) num1 = num;
        else num2 = num;
    }
    if(c == 'o'){
        for(int i = 0;i < length ;i++){
            replace(s.mid(i,1),8,num);
        }
        if(operat_flag == 0) num1 = num;
        else num2 = num;
    }
    if(c == 'h'){
        for(int i = 0;i< length ;i++){
            replace(s.mid(i,1),16,num);
        }
        if(operat_flag == 0) num1 = num;
        else num2 = num;
    }

}
void MainWindow::operation()
{
    switch(operat){
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    case 5:
        result = qLn(num2) / qLn(num1);
        break;
    case 6:
        result = qPow(num1,num2);
        break;
    case 7:
        result = sin(num1);
        break;
    case 8:
        result = cos(num1);
        break;
    case 9:
        result = tan(num1);
        break;
    case 10:
        result = gcd(num1,num2);
        break;
    case 11:
        result = num1*num2/gcd(num1,num2);
        break;
    }
    //把结果存到num1中，清零num2
    num1 = result;
    num2 = 0;
    s = QString::number(result,'g',6);
}

void MainWindow::button_0_clicked(){
    s += "0";
    data->setText(s);
    readNum('0');
}

void MainWindow::button_1_clicked(){
    s += "1";
    data->setText(s);
    readNum('1');
}

void MainWindow::button_2_clicked(){
    s += "2";
    data->setText(s);
    readNum('2');
}

void MainWindow::button_3_clicked(){
    s += "3";
    data->setText(s);
    readNum('3');
}

void MainWindow::button_4_clicked(){
    s += "4";
    data->setText(s);
    readNum('4');
}

void MainWindow::button_5_clicked(){
    s += "5";
    data->setText(s);
    readNum('5');
}

void MainWindow::button_6_clicked(){
    s += "6";
    data->setText(s);
    readNum('6');
}

void MainWindow::button_7_clicked(){
    s += "7";
    data->setText(s);
    readNum('7');
}

void MainWindow::button_8_clicked(){
    s += "8";
    data->setText(s);
    readNum('8');
}

void MainWindow::button_9_clicked(){
    s += "9";
    data->setText(s);
    readNum('9');
}

void MainWindow::button_A_clicked()
{
    s += "A";
    data->setText(s);
}

void MainWindow::button_B_clicked()
{
    s += "B";
    data->setText(s);
}

void MainWindow::button_C_clicked()
{
    s += "C";
    data->setText(s);
}

void MainWindow::button_D_clicked()
{
    s += "D";
    data ->setText(s);
}

void MainWindow::button_E_clicked()
{
    s += "E";
    data ->setText(s);
}

void MainWindow::button_F_clicked()
{
    s += "F";
    data ->setText(s);
}



void MainWindow::button_bin_clicked()                                            //二进制标识
{
  s += "b";
  data ->setText(s);
  readNum('b');
}

void MainWindow::button_oct_clicked()                                           //八进制标识
{
    s += "o";
    data -> setText(s);
    readNum('o');
}

void MainWindow::button_hex_clicked()                                           //十六进制标识
{
    s += "h";
    data -> setText(s);
    readNum('h');
}

void MainWindow::button_ce_clicked(){                                        //清零
    s = "";
    data->setText("");
    //初始化数据
    init_data();
}
void MainWindow::button_log_clicked()
{
    operat_flag = 1;
    operat = 5;
    s = "";
}

void MainWindow::button_exp_clicked()
{
    operat_flag = 1;
    operat = 6;
    s = "";
}

void MainWindow::button_sin_clicked()
{
    operat = 7;
    s = "";
}

void MainWindow::button_cos_clicked()
{
    operat = 8;
    s = "";
}

void MainWindow::button_tan_clicked()
{
    operat = 9;
    s= "";
}

void MainWindow::button_gcd_clicked()
{
    operat_flag = 1;
    operat = 10;
    s = "";
}

void MainWindow::button_lcm_clicked()
{
    operat_flag = 1;
    operat = 11;
    s = "";
}

void MainWindow::button_add_clicked(){                                       //加
    operat_flag = 1;
    operat = 1;
    s = "";
}

void MainWindow::button_sub_clicked(){                                       //减
    operat_flag = 1;
    operat = 2;
    s = "";
}

void MainWindow::button_mul_clicked(){                                       //乘
    operat_flag = 1;
    operat = 3;
    s = "";
}

void MainWindow::button_div_clicked(){                                        //除
    operat_flag = 1;
    operat = 4;
    s = "";
}

void MainWindow::button_result_clicked(){                                     //=等于
    operation();
    QString a = QString::number(result,'g',6);
    data->setText(a);
}
void MainWindow::button_lkuo_clicked(){

}
