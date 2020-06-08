#include "bnbproblem.h"
#include "ui_bnbproblem.h"

BnBProblem::BnBProblem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BnBProblem)
{
    ui->setupUi(this);
}

BnBProblem::~BnBProblem()
{
    delete ui;
}

void BnBProblem::on_BnBSolveButton_clicked()
{
    hide();
    bnbanswer = new BnBAnswer(this);
    bnbanswer->show();
}
