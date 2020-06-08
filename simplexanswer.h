#ifndef SIMPLEXANSWER_H
#define SIMPLEXANSWER_H

#include <QDialog>

namespace Ui {
    class SimplexAnswer;
}

class SimplexAnswer : public QDialog
{
    Q_OBJECT

public:
    explicit SimplexAnswer(QWidget *parent = 0);
    ~SimplexAnswer();

private:
    Ui::SimplexAnswer *ui;
};

#endif // SIMPLEXANSWER_H
