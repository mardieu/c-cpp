#include <iostream>
using namespace std;

int main(){

    /*
    Entrada
    Composta por duas linhas, sendo que cada linha contém um inteiro.
    Saída
    Seu programa deve imprimir 5 linhas, cada uma contendo o resultado de uma
    operação na seguinte ordem: soma, subtração, multiplicação, divisão e resto. 
    */

    int n1, n2;
    cin>>n1;
    cin>>n2;

    cout<<(n1+n2)<<endl<<(n1-n2)<<endl<<(n1*n2)<<endl<<(n1/n2)<<endl<<(n1%n2)<<endl;

    return 0;
}