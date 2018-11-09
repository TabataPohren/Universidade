#ifndef PILHA_H
#define PILHA_H
#include <QApplication>
#include <QtCore>


class Pilha
{
    QStack<int> pilha;//cria pilha

public:
    Pilha();

    void empilhar(int elemento);//adiciona elemento a pilha
    int desempilhar();//remove ultimo elemento da pilha
    void inverter();//inverte os dois ultimos elementos da pilha

};

#endif // PILHA_H
