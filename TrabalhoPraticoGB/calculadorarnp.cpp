#include "calculadorarnp.h"
#include "ui_calculadorarnp.h"
#include "calc.h"
#include "gerenciadorpilha.h"

CalculadoraRNP::CalculadoraRNP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculadoraRNP)
{
    ui->setupUi(this);
}

CalculadoraRNP::~CalculadoraRNP()
{
    delete ui;
}

void CalculadoraRNP::on_Soma_clicked()
{
    ui->ExibirValor->undo();
    ui->ExibirValor->undo();
    int firstValue = gerenciadorPilha.remover();
    int secondValue = gerenciadorPilha.remover();

    //int result = calculadora.execute(firstValue,secondValue,"+");

   // int teste = calculadora.execute(gerenciadorPilha.remover(),gerenciadorPilha.remover(), "+");
    //int result = calculadora.execute(firstValue,secondValue, "+");
    int result = (firstValue + secondValue);
    //ui->lineEdit->setText(QString("%1").arg(teste));
    gerenciadorPilha.adicionar(result);
    ui->ExibirValor->append(QString("%1").arg(result));
}

void CalculadoraRNP::on_N1_clicked()
{
    saveNumber = 1;
    gerenciadorPilha.adicionar(1);

    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N2_clicked()
{
    saveNumber = 2;
    gerenciadorPilha.adicionar(2);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));
}

void CalculadoraRNP::on_N3_clicked()
{
    saveNumber = 3;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N4_clicked()
{
    saveNumber = 4;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N5_clicked()
{
    saveNumber = 5;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N6_clicked()
{
    saveNumber = 6;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N7_clicked()
{
    saveNumber = 7;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N8_clicked()
{
    saveNumber = 8;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N9_clicked()
{
    saveNumber = 9;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_N0_clicked()
{
    saveNumber = 0;
    gerenciadorPilha.adicionar(saveNumber);
    ui->lineEdit->setText(QString("%1").arg(saveNumber));

}

void CalculadoraRNP::on_Enter_clicked()
{

}


void CalculadoraRNP::on_ExibirValor_textChanged()
{

}

void CalculadoraRNP::on_enter_clicked()
{
    ui->ExibirValor->append(QString("%1").arg(saveNumber));
}

void CalculadoraRNP::on_SetaVoltar_clicked()
{
    //ui->ExibirValor->cursorForPosition();
}

void CalculadoraRNP::on_Del_clicked()
{
    ui->ExibirValor->undo();
}

void CalculadoraRNP::on_Clear_clicked()
{
    saveNumber = NULL;
    ui->lineEdit->setText(" ");
}

void CalculadoraRNP::on_Subtracao_clicked()
{

}

void CalculadoraRNP::on_Multiplicacao_clicked()
{

}

void CalculadoraRNP::on_Divisao_clicked()
{

}

void CalculadoraRNP::on_Rol_clicked()
{
    int firstValue = gerenciadorPilha.remover();
    int secondValue = gerenciadorPilha.remover();

    gerenciadorPilha.adicionar(firstValue);
    gerenciadorPilha.adicionar(secondValue);

    ui->ExibirValor->undo();
    ui->ExibirValor->undo();

    ui->ExibirValor->append(QString("%1").arg(firstValue));
    ui->ExibirValor->append(QString("%1").arg(secondValue));

}
