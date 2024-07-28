#include <iostream>
using namespace std;

/*
Entrada
A entrada é composta por cinco inteiros, “A”, “B”, “C”, “D’ e “E”, representando
respectivamente, o total de naves sondadas no quadrante, o total de naves amigas detectadas a
frente de Skywalker, o total de naves amigas a direita, o total de naves amigas a esquerda e o
total de naves amigas atrás da nave de Skywalker. Saiba que 0 <= A, B, C, D, E <= 1000 e que (B +
C + D + E) <= A.
Saída
A saída será composta por apenas um número inteiro, ou seja, o total de naves inimigas no
quadrante em que Skywalker se encontra.
*/

int main(){
    int A, B, C, D, E;
    cin>>A>>B>>C>>D>>E;
    // total inimigas:
    cout<<A-(B+C+D+E)<<endl;
    return 0;
}