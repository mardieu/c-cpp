#include <iostream>
using namespace std;

int main(){

    /*
    Entrada
    A entrada é composta por dois caracteres “P1” e “P2”, dados em linhas diferentes e
    representando a característica de cada pergaminho. Portanto, “P1” e “P2” podem ser “A” (azul),
    “B” (branco) e “N” (sem pergaminho).
    Saída
    A saída será composta pela mensagem “classificado”, indicando que o trio foi classificado
    (dois pergaminhos distintos) ou “eliminado” (pergaminhos iguais ou pelo menos um pergaminho
    faltando), indicando a eliminação da equipe.
    */

    char P1, P2;

    // pode ser:
    // A (azul)
    // B (branco)
    // N (sem pergaminho)
    cin>>P1;
    cin>>P2;

    if (P1 == 'A' && P2 == 'B' || P1 == 'B' && P2 == 'A')
    {
        cout << "classificado" << endl;
    }else
    {
        cout << "eliminado" << endl;
    }

    return 0;
}