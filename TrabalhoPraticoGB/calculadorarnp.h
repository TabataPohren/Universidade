#ifndef CALCULADORARNP_H
#define CALCULADORARNP_H
#include "calc.h"
#include "gerenciadorpilha.h"

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
    int saveNumber;
    Calc calculadora;
    GerenciadorPilha gerenciadorPilha;
    QString save= NULL;
    bool ok;



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

    void on_Enter_clicked();

    void on_ExibirValor_textChanged();

    void on_Del_clicked();

    void on_Clear_clicked();

    void on_Subtracao_clicked();

    void on_Multiplicacao_clicked();

    void on_Divisao_clicked();

    void on_Rol_clicked();

    void on_SetaDown_clicked();

    void on_SetaTop_clicked();

    void on_SetaUp_clicked();

private:
    Ui::CalculadoraRNP *ui;
};

#endif // CALCULADORARNP_H
