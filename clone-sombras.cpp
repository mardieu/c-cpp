#include <iostream>
using namespace std;

int main(){

    /*
    Entrada
    A primeira linha da entrada consiste de um inteiro ‘N’ (1 <= N <= 5000), que
    representa a quantidade de ninjas inimigos.
    Saída
    A saída consiste em uma linha contendo “Dattebayo”, caso seja possível ter o
    número de narutos exatamente igual ao número de inimigos, ou “Tururuuu”, caso não
    seja possível.
    */

    int inimigos;
    cin>>inimigos;

    int naruto;
    for (naruto = 1; naruto < inimigos; naruto*=2){}

    if (naruto == inimigos)
        cout << "Dattebayo" << endl;
    else
        cout << "Tururuuu" << endl;

    return 0;
}