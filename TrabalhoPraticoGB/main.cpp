#include "calculadorarnp.h"
#include <QApplication>
#include <QTextLine>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculadoraRNP w;
    w.show();

    return a.exec();
}
