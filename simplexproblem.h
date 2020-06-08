#ifndef SIMPLEXPROBLEM_H
#define SIMPLEXPROBLEM_H
#include <simplexanswer.h>

#include <QDialog>

namespace Ui {
    class SimplexProblem;
}

class SimplexProblem : public QDialog
{
    Q_OBJECT

public:
    explicit SimplexProblem(QWidget *parent = 0);
    ~SimplexProblem();

private:
    Ui::SimplexProblem *ui;
    SimplexAnswer *simplexanswer;

private slots:
    void on_SimplexSolveButton_clicked();
};

#endif // SIMPLEXPROBLEM_H
