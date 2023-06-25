#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    b2 = new QPushButton("Hello Qut", this);
    b1.setText("我是老二");
    b2->show();
    b1.setParent(this);
    b1.move(100,100);

    connect(&b1, &QPushButton::clicked, this, &Widget::close);
    connect(b2, &QPushButton::released, this, &Widget::slotForMainWidget);
}

void Widget::slotForMainWidget()
{
    b1.setText("我被 修改了");
}


Widget::~Widget()
{
}


