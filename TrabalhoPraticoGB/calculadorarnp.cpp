#include "calculadorarnp.h"
#include "ui_calculadorarnp.h"
#include "calc.h"

CalculadoraRNP::CalculadoraRNP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculadoraRNP)
{
    ui->setupUi(this);
    Calc calculadora;
}

CalculadoraRNP::~CalculadoraRNP()
{
    delete ui;
}

void CalculadoraRNP::on_Soma_clicked()
{

}

void CalculadoraRNP::on_N1_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(1));

}

void CalculadoraRNP::on_N2_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(2));
}

void CalculadoraRNP::on_N3_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(3));

}

void CalculadoraRNP::on_N4_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(4));

}

void CalculadoraRNP::on_N5_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(5));

}

void CalculadoraRNP::on_N6_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(6));

}

void CalculadoraRNP::on_N7_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(7));

}

void CalculadoraRNP::on_N8_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(8));

}

void CalculadoraRNP::on_N9_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(9));

}

void CalculadoraRNP::on_N0_clicked()
{
    ui->lineEdit->setText(QString("%1").arg(0));

}
