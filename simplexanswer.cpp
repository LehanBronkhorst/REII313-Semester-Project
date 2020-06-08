#include "simplexanswer.h"
#include "ui_simplexanswer.h"

SimplexAnswer::SimplexAnswer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimplexAnswer)
{
    ui->setupUi(this);
}

SimplexAnswer::~SimplexAnswer()
{
    delete ui;
}
