#include "calc.h"
#include <QApplication>


Calc::Calc()
{

}

int Calc::execute(int primeiroValor, int segundoValor, QString operador){
    if(operador.contains("+"))
            return (primeiroValor+segundoValor);
    if(operador.contains("-"))
            return (primeiroValor-segundoValor);
    if(operador.contains("*"))
            return (primeiroValor*segundoValor);
    if(operador.contains("/"))
            return (primeiroValor/segundoValor);
}
