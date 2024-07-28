#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    /*
    Entrada
    A entrada é composta na primeira linha por 2 inteiros, ‘T’ e ‘D’ (1 <=
    ‘T’,‘D’ <= 1000), representando o tamanho da estrada e a distância entre os
    pedágios. Na próxima linha serão fornecidos outros 2 inteiros, ‘V’ e ‘P’ (1 <=
    ‘V’,‘P’ <= 100), representando o valor por km de estrada e o valor por cada
    pedágio.
    Saída
    Na saída será apresentado o valor total pela travessia da floresta.
    */

    int T; // tamanho da estrada
    int D; // distancia entre pedágios
    int V; // valor por km de estrada
    int P; // valor do pedágio

    cin>>T>>D;
    // tamanho_km e distancia/pedagio
    cin>>V>>P;
    // valor/km e valor/pedagio

    int estrada = T*V;
    int pedagio = (T/D)*P;
    int total = estrada + pedagio;

    // std::cout<<std::fixed;
    // std::cout<<std::setprecision(2)<<total<<endl;

    cout<<total<<endl;

    return 0;
}