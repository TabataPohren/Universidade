#ifndef CALCULADORARNP_H
#define CALCULADORARNP_H

#include <QMainWindow>

namespace Ui {
class CalculadoraRNP;
}

class CalculadoraRNP : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculadoraRNP(QWidget *parent = 0);
    ~CalculadoraRNP();

private slots:
    void on_Soma_clicked();

private:
    Ui::CalculadoraRNP *ui;
};

#endif // CALCULADORARNP_H
