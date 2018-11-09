#include "pilha.h"

Pilha::Pilha()
{

}

void Pilha::empilhar(int elemento)
{
    pilha.push(elemento);
}

int Pilha::desempilhar()
{
    return pilha.pop();
}

void Pilha::inverter()
{
    int var1=0, var2=0;
    var1 = desempilhar();
    var2 = desempilhar();
    empilhar(var1);
    empilhar(var2);
}
