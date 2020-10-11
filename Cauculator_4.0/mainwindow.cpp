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
    button_sin = new QPushButton("sin");
    button_cos = new QPushButton("cos");
    button_tan = new QPushButton("tan");
    button_exp = new QPushButton("x的y次方");
    button_gcd = new QPushButton("最大公约数");
    button_lcm = new QPushButton("最小公倍数");
    button_log = new QPushButton("Log");
    button_daoshu = new QPushButton("1/x");
    button_jdz = new QPushButton("|x|");
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
    button_log->setMinimumHeight(50);
    button_exp -> setMinimumHeight(50);
    button_sin -> setMinimumHeight(50);
    button_cos -> setMinimumHeight(50);
    button_tan -> setMinimumHeight(50);
    button_gcd -> setMinimumHeight(50);
    button_lcm -> setMinimumHeight(50);
    button_result->setMinimumHeight(50);
    button_daoshu->setMinimumHeight(50);
    button_jdz->setMinimumHeight(50);
    button_lkuo->setMinimumHeight(50);
    button_rkuo->setMinimumHeight(50);

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
    connect(button_lkuo,SIGNAL(clicked(bool)),this,SLOT(button_lkuo_clicked()));
    connect(button_rkuo,SIGNAL(clicked(bool)),this,SLOT(button_rkuo_clicked()));
    connect(button_log,SIGNAL(clicked(bool)),this,SLOT(button_log_clicked()));
    connect(button_exp,SIGNAL(clicked(bool)),this,SLOT(button_exp_clicked()));
    connect(button_sin,SIGNAL(clicked(bool)),this,SLOT(button_sin_clicked()));
    connect(button_cos,SIGNAL(clicked(bool)),this,SLOT(button_cos_clicked()));
    connect(button_tan,SIGNAL(clicked(bool)),this,SLOT(button_tan_clicked()));
    connect(button_gcd,SIGNAL(clicked(bool)),this,SLOT(button_gcd_clicked()));
    connect(button_lcm,SIGNAL(clicked(bool)),this,SLOT(button_lcm_clicked()));
    connect(button_daoshu,SIGNAL(clicked(bool)),this,SLOT(button_daoshu_clicked()));
    connect(button_jdz,SIGNAL(clicked(bool)),this,SLOT(button_jdz_clicked()));

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

    layout->addWidget(button_lkuo,9,1,Qt::Alignment());
    layout->addWidget(button_rkuo,9,2,Qt::Alignment());
    layout->addWidget(button_lcm,9,3,Qt::Alignment());
    layout->addWidget(button_daoshu,9,4,Qt::Alignment());

    layout->addWidget(button_sin,10,1,Qt::Alignment());
    layout->addWidget(button_cos,10,2,Qt::Alignment());
    layout->addWidget(button_tan,10,3,Qt::Alignment());
    layout->addWidget(button_jdz,10,4,Qt::Alignment());


    layout->setMargin(15);
    centerWindow->setLayout(layout);
}

MainWindow::~MainWindow()
{

}

void MainWindow::init_data()
{
    while(!num.isEmpty()){
        num.pop_back();
    }
    while(!st.isEmpty()){
        st.pop();
    }
    num.append(0);
    //operat_flag = 0;
    flag = false;
    s = str= "";
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

void MainWindow::readNum(char c)
{
    flag = false;
    double numt = 0;
    int length = s.length() -1;
    if(c>='0'&&c<='9'){
      numt = c-48;
      double d = num.back();
      num.pop_back();
      num.append(10*d+numt);
      qDebug() << "num.back" << num.back();
    }
    if(c == 'b'){
        for(int i= 0 ;i < length ;i++){
            replace(s.mid(i,1),2,numt);
        }
        num.pop_back();
        num.append(numt);
        qDebug() << "num.back" << num.back();
    }
    if(c == 'o'){
        for(int i = 0;i < length ;i++){
            replace(s.mid(i,1),8,numt);
        }
        num.pop_back();
        num.append(numt);
        qDebug() << "num.back" << num.back();
    }
    if(c == 'h'){
        for(int i = 0;i< length ;i++){
            replace(s.mid(i,1),16,numt);
        }
        num.pop_back();
        num.append(numt);
        qDebug() << "num.back" << num.back();
    }

}
void MainWindow::operation()
{
    if(transport == '(') {
        st.push(transport);
        qDebug() << "st.push" << transport;
        qDebug() << "st.top"<< st.top();
        qDebug() << "st.size" << st.size();
    }
    else if(transport == '+' || transport == '-' || transport == '*' || transport == '/'){
        while(1){
            if((!st.isEmpty() && compare(transport,st.top()) ) || st.isEmpty()){
                st.push(transport);
                //qDebug() << "st.push" << transport;
                //qDebug() << "st.size" << st.size();
                break;
            }
            else if(!st.isEmpty()&&!compare(transport,st.top())){
                qDebug() << "here1";
                double temp2 = num.back();
                num.pop_back();
                double temp1 = num.back();
                num.pop_back();
                num.append(opt(temp1,temp2,st.top()));
                /*qDebug() << "temp1" << temp1;
                qDebug() << "temp2" << temp2;
                qDebug() << "num.back" << num.back();
                qDebug() << "st.top" << st.top(); */
                st.pop();
            }
        }
    }
    else if(transport == ')'){
        qDebug() << "st.size" << st.size();
        while(st.top() != '('){
            qDebug() << "here2" ;
            double temp2 = num.back();
            num.pop_back();
            double temp1 = num.back();
            num.pop_back();
            num.append(opt(temp1,temp2,st.top()));
            qDebug() << "temp1" << temp1;
            qDebug() << "temp2" << temp2;
            qDebug() << "num.back" << num.back();
            qDebug() << "st.top" << st.top();
            //qDebug() << "flag" << operat_flag;
            //operat_flag--;
            st.pop();
            qDebug() << "st.size" << st.size();
        }
        st.pop();
    }
    /*else if(transport == 'l' ||transport == 'e'||transport == 'd' ||transport == 'x' ){
        st.push(transport);
    }
    else if(transport == 's' || transport == 'c' || transport == 't' || transport == 'i'||transport == 'j'){
        st.push(transport);
        qDebug() << "st.push" << transport;
        qDebug() << "st.size" << st.size();
    }*/
    else {
        st.push(transport);
    }
}


double MainWindow:: opt(double a,double b,char c){
    if(c == '+') return a+b;
    else if(c == '-') return a-b;
    else if(c == '*') return a*b;
    else if(c == '/') return a/b;
    else if(c == 'l') return qLn(a) / qLn(b);
    else if(c == 'e') return qPow(a,b);
    else if(c == 'd') return gcd(a,b);
    else if(c == 'x') return a*b/gcd(a,b);
    else if(c == 's') return sin(a);
    else if(c == 'c') return cos(a);
    else if(c == 't') return tan(a);
    else if(c == 'i') return 1.0/a;
    else if(c == 'j') return a>=0?a:-a;
}


bool MainWindow::compare(char a ,char b){

    bool temp1 =  (a == '*' || a == '/' || a == '(' );
    bool temp2 =  (b!= '*' && b!= '/' && b!= '(' );
    if(temp1 && temp2) return true;
    else if(b == '(') return true;
    else if(a == 's' || a == 'c' || a == 't') return true;
    else return false;
}


void MainWindow::button_0_clicked(){
    s += "0";
    str += "0";
    data->setText(str);
    readNum('0');
}

void MainWindow::button_1_clicked(){
    s += "1";
    str += "1";
    data->setText(str);
    readNum('1');
}

void MainWindow::button_2_clicked(){
    s += "2";
    str += "2";
    data->setText(str);
    readNum('2');
}

void MainWindow::button_3_clicked(){
    s += "3";
    str += "3";
    data->setText(str);
    readNum('3');
}

void MainWindow::button_4_clicked(){
    s += "4";
    str += "4";
    data->setText(str);
    readNum('4');
}

void MainWindow::button_5_clicked(){
    s += "5";
    str += "5";
    data->setText(str);
    readNum('5');
}

void MainWindow::button_6_clicked(){
    s += "6";
    str += "6";
    data->setText(str);
    readNum('6');
}

void MainWindow::button_7_clicked(){
    s += "7";
    str += "7";
    data->setText(str);
    readNum('7');
}

void MainWindow::button_8_clicked(){
    s += "8";
    str += "8";
    data->setText(str);
    readNum('8');
}

void MainWindow::button_9_clicked(){
    s += "9";
    str += "9";
    data->setText(str);
    readNum('9');
}

void MainWindow::button_A_clicked()
{
    s += "A";
    str += "A";
    data->setText(str);
}

void MainWindow::button_B_clicked()
{
    s += "B";
    str += "B";
    data->setText(str);
}

void MainWindow::button_C_clicked()
{
    s += "C";
    str += "C";
    data->setText(str);
}

void MainWindow::button_D_clicked()
{
    s += "D";
    str += "D";
    data->setText(str);
}

void MainWindow::button_E_clicked()
{
    s += "E";
    str += "E";
    data->setText(str);
}

void MainWindow::button_F_clicked()
{
    s += "F";
    str += "F";
    data->setText(str);
}



void MainWindow::button_bin_clicked()                                            //二进制标识
{
  s += "b";
  str += "B";
  data->setText(str);
  readNum('b');
}

void MainWindow::button_oct_clicked()                                           //八进制标识
{
    s += "o";
    str += "O";
    data->setText(str);
    readNum('o');
}

void MainWindow::button_hex_clicked()                                           //十六进制标识
{
    s += "h";
    str += "H";
    data->setText(str);
    readNum('h');
}

void MainWindow::button_lkuo_clicked(){
    transport = '(';
    operation();
    if(!flag) num.append(0);
    s = "";
    str += "(";
    data->setText(str);
    flag = true;
}
void MainWindow::button_rkuo_clicked(){
    transport = ')';
    operation();
    //if(!flag) num.append(0);
    s = "";
    str += ")";
    data->setText(str);
    flag = false;
}

void MainWindow::button_log_clicked(){                                      //对数
    transport = 'l';
    operation();
    str = "";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_exp_clicked(){                                      //指数
    transport = 'e';
    operation();
    str = "";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_sin_clicked(){                                     //sin
    transport = 's';
    operation();
    str += "sin";
    data->setText(str);
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_cos_clicked(){                                   //cos
    transport = 'c';
    operation();
    str += "cos";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_tan_clicked(){                                  //tan
    transport = 't';
    operation();
    str += "tan";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_gcd_clicked(){                                  //最大公约数
    transport = 'd';
    operation();
    str = "";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_lcm_clicked(){                                  //最小公倍数
    transport = 'x';
    operation();
    str = "";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_daoshu_clicked(){                               //取倒数
    transport = 'i';
    operation();
    str = "";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_jdz_clicked(){                                  //取绝对值
    transport = 'j';
    operation();
    str = "";
    if(!flag) num.append(0);
    flag = true;
}

void MainWindow::button_ce_clicked(){                                        //清零
    s = "";
    data->setText("");
    //初始化数据
    init_data();
}


void MainWindow::button_add_clicked(){                                       //加
    transport = '+';
    operation();
    if(!flag) num.append(0);
    s = "";
    str += "+";
    data->setText(str);
    flag = true;
}

void MainWindow::button_sub_clicked(){                                       //减
    transport = '-';
    operation();
    if(!flag) num.append(0);
    s = "";
    str += "-";
    data->setText(str);
    flag = true;
}

void MainWindow::button_mul_clicked(){                                       //乘
    transport = '*';
    operation();
    if(!flag) num.append(0);
    s = "";
    str += "*";
    data->setText(str);
    flag = true;
}

void MainWindow::button_div_clicked(){                                        //除
    transport = '/';
    operation();
    if(!flag) num.append(0);
    s = "";
    str += "/";
    data->setText(str);
    flag = true;
}

void MainWindow::button_result_clicked(){                                     //=等于
    while(!st.isEmpty()){
        if(st.top()!='s'&&st.top()!='c'&&st.top()!='t'&&st.top()!='i'&&st.top()!= 'j'){
            double temp2 = num.back();
            num.pop_back();
            double temp1 = num.back();
            num.pop_back();
            num.append(opt(temp1,temp2,st.top()));
            qDebug() << temp1;
            qDebug() << temp2;
            st.pop();
        }
        else{
            double temp = num.back();
            num.pop_back();
            num.append(opt(temp,0,st.top()));
            qDebug() << temp;
            st.pop();
        }

    }
    result = num.back();
    //num.pop_back();
    QString a = QString::number(result,'g',6);
    data->setText(a);
    init_data();
    num.append(result);
    str += a;
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
