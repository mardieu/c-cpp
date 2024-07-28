#include <iostream>
using namespace std;

int main(){

/*
Entrada
A entrada possui um único número inteiro ‘N’ (20 ≤ N ≤ 200), que representa
a quantidade de titãs na região, e será sempre um múltiplo de 5.
Saída
A saída consiste em um número inteiro X que representa a quantidade de
soldados comuns necessários para eliminar todos os titãs durante 1 hora de missão.
*/

    // tempo max = 1h
    // levi ackerman incluído

    int levi = 20; // 20 titans por hora
    int titans; // possui múltiplo de 5 (???)
    int soldier = 5; // 5 titans por hora


    // lógica = levi + n de soldados -> 20 + x*5

    cin>>titans;

    cout<<(titans-levi)/soldier<<endl;

    return 0;
}