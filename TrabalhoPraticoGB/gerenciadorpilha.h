#ifndef GERENCIADORPILHA_H
#define GERENCIADORPILHA_H
#include <QStack>

class GerenciadorPilha
{
public:
    QStack<int> pilha;

    GerenciadorPilha();


    void adicionar(int numero);
    int remover();
    void inverter();
};

#endif // GERENCIADORPILHA_H
