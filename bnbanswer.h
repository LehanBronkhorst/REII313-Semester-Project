#ifndef BNBANSWER_H
#define BNBANSWER_H

#include <QDialog>

namespace Ui {
    class BnBAnswer;
}

class BnBAnswer : public QDialog
{
    Q_OBJECT

public:
    explicit BnBAnswer(QWidget *parent = 0);
    ~BnBAnswer();

private:
    Ui::BnBAnswer *ui;
};

#endif // BNBANSWER_H
