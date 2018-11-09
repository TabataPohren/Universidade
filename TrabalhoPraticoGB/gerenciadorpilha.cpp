#include "gerenciadorpilha.h"
#include <QStack>


GerenciadorPilha::GerenciadorPilha()
{

}

void GerenciadorPilha::adicionar(int Numero){
    pilha.push(Numero);
}

int GerenciadorPilha::remover(){
    return pilha.pop();
}

void GerenciadorPilha::inverter(){
    int firstSave = pilha.pop();
    int secondSave = pilha.pop();

    pilha.push(firstSave);
    pilha.push(secondSave);

}

