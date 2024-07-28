#include <iostream>
using namespace std;

int main()
{

    /*
    Entrada
    A entrada contêm dois inteiros ‘N’ (1 <= N <= 103
    ) e ‘Q’ (1 <= ‘Q’
    <= 106
    ), representando, respectivamente, a quantidade de feno que
    determinado aldeão quer comprar e a quantidade de feno disponível para
    compra.
    Saída
    Você deverá imprimir se é possível vender o feno imprimindo
    “vendido” ou em caso contrário, imprimindo “sinto muito”.
    */
    
    long long int N, Q;
    // a vender e disponível
    cin >> N >> Q;

    long long int venda = Q - N;


    if (N>Q)
    {
        cout << "sinto muito" << endl;
    }
    else if (venda % 2 == 0)
    {
        cout << "vendido" << endl;
    }
    else{
        cout << "sinto muito" << endl;
    }
}