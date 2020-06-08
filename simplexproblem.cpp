#include "simplexproblem.h"
#include "ui_simplexproblem.h"

SimplexProblem::SimplexProblem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimplexProblem)
{
    ui->setupUi(this);
}

SimplexProblem::~SimplexProblem()
{
    delete ui;
}

void SimplexProblem::on_SimplexSolveButton_clicked()
{
    hide();
    simplexanswer = new SimplexAnswer(this);
    simplexanswer->show();
}
