#include <iostream>
#include <cmath>
using namespace std;

/*
Entrada
A entrada consiste em dois valores inteiros positivos correspondentes à
massa (o peso) atual do Flash em quilos (40 ≤ P ≤ 100) e a velocidade em que o
Flash está correndo em determinado momento, em metros por segundo (0 ≤ V ≤ 300.000.000).
Saída
A saída corresponde a um inteiro que é a energia necessária para o Flash
chegar a essa velocidade considerando as limitações descritas pela teoria da
relatividade (Energia = Massa x Velocidade2)./
*/

int main()
{
    int peso;
    long int velocidade;
    int resultado;
    resultado = peso * pow(velocidade, 2);
    cin >> peso;
    cin >> velocidade;
    // cout<<peso * (velocidade*velocidade)<<endl;
    cout << resultado << endl;
    return 0;
}