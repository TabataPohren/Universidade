#include "calculadorarnp.h"
#include "ui_calculadorarnp.h"

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

}
