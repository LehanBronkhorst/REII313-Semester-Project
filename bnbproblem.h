#ifndef BNBPROBLEM_H
#define BNBPROBLEM_H
#include <bnbanswer.h>


#include <QDialog>

namespace Ui {
    class BnBProblem;
}

class BnBProblem : public QDialog
{
    Q_OBJECT

public:
    explicit BnBProblem(QWidget *parent = 0);
    ~BnBProblem();

private:
    Ui::BnBProblem *ui;
    BnBAnswer *bnbanswer;


private slots:
    void on_BnBSolveButton_clicked();
};

#endif // BNBPROBLEM_H
