#include "calculadorarnp.h"
#include "ui_calculadorarnp.h"
#include "calc.h"
#include "gerenciadorpilha.h"

CalculadoraRNP::CalculadoraRNP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculadoraRNP)
{
    ui->setupUi(this);
    saveNumber=NULL;
    QString save= NULL;
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

    int result = calculadora.execute(firstValue,secondValue, "+");
    gerenciadorPilha.adicionar(result);
    ui->ExibirValor->append(QString("%1").arg(result));
}

void CalculadoraRNP::on_N1_clicked()
{
    save = save + "1";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N2_clicked()
{
    save = save + "2";
    ui->lineEdit->setText(save);
}

void CalculadoraRNP::on_N3_clicked()
{
    save = save + "3";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N4_clicked()
{
    save = save + "4";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N5_clicked()
{
    save = save + "5";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N6_clicked()
{
    save = save + "6";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N7_clicked()
{
    save = save + "7";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N8_clicked()
{
    save = save + "8";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N9_clicked()
{
    save = save + "9";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_N0_clicked()
{
    save = save + "0";
    ui->lineEdit->setText(save);

}

void CalculadoraRNP::on_Enter_clicked()
{
    ui->lineEdit->setText(NULL);
    gerenciadorPilha.adicionar(save.toInt(&ok,10));
    ui->ExibirValor->append(save);

    save= "";
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
    ui->ExibirValor->undo();
    ui->ExibirValor->undo();
    int firstValue = gerenciadorPilha.remover();
    int secondValue = gerenciadorPilha.remover();

    int result = calculadora.execute(firstValue,secondValue, "-");
    gerenciadorPilha.adicionar(result);
    ui->ExibirValor->append(QString("%1").arg(result));

}

void CalculadoraRNP::on_Multiplicacao_clicked()
{
    ui->ExibirValor->undo();
    ui->ExibirValor->undo();
    int firstValue = gerenciadorPilha.remover();
    int secondValue = gerenciadorPilha.remover();

    int result = calculadora.execute(firstValue,secondValue, "*");
    gerenciadorPilha.adicionar(result);
    ui->ExibirValor->append(QString("%1").arg(result));
}

void CalculadoraRNP::on_Divisao_clicked()
{
    ui->ExibirValor->undo();
    ui->ExibirValor->undo();
    int firstValue = gerenciadorPilha.remover();
    int secondValue = gerenciadorPilha.remover();

    int result = calculadora.execute(secondValue,firstValue, "/");
    gerenciadorPilha.adicionar(result);
    ui->ExibirValor->append(QString("%1").arg(result));
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

void CalculadoraRNP::on_SetaDown_clicked()
{
    QTextCursor textCursor = ui->ExibirValor->textCursor();
    textCursor.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, 1);
    ui->ExibirValor->setTextCursor(textCursor);
}

void CalculadoraRNP::on_SetaTop_clicked()
{
    QTextCursor textCursor = ui->ExibirValor->textCursor();
    textCursor.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor, 1);
    ui->ExibirValor->setTextCursor(textCursor);
}

void CalculadoraRNP::on_SetaUp_clicked()
{
    QTextCursor textCursor = ui->ExibirValor->textCursor();
    textCursor.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor, 1);
    ui->ExibirValor->setTextCursor(textCursor);
}
