#include "main_widget.h"
#include "ui_main_widget.h"

main_Widget::main_Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::main_Widget)
{
    ui->setupUi(this);
}

main_Widget::~main_Widget()
{
    delete ui;
}

