#include "bnbanswer.h"
#include "ui_bnbanswer.h"

BnBAnswer::BnBAnswer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BnBAnswer)
{
    ui->setupUi(this);
}

BnBAnswer::~BnBAnswer()
{
    delete ui;
}
