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

    void on_N1_clicked();

    void on_N2_clicked();

    void on_N3_clicked();

    void on_N4_clicked();

    void on_N5_clicked();

    void on_N6_clicked();

    void on_N7_clicked();

    void on_N8_clicked();

    void on_N9_clicked();

    void on_N0_clicked();

private:
    Ui::CalculadoraRNP *ui;
};

#endif // CALCULADORARNP_H
