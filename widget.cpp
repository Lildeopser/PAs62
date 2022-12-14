#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_result_clicked()
{
    bool ok1;
    bool ok2;
    int x=ui->op1->text().toInt(&ok1);
    int y=ui->op2->text().toInt(&ok2);
   if (ok1&ok2)
   {
       if (y>=2 and y<=32)
       {
         QString answer = QString::number(abs(x),y);
if (x>=0)
       {
    ui->res->setText(answer);
}
else
{
   ui->res->setText("-"+answer);
}

       }
       else
       {
           ui->res->setText("Неверно указана система счисления");
       }
   }
       else
   {
       ui->res->setText("Неверно введены данные");
   }
}

