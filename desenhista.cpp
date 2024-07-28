#include <iostream>
using namespace std;

int main()
{

    /*
    Entrada:
    A entrada consiste em um número inteiro ‘P’ (1 <= P <= 20), que representa a
    altura que a pirâmide terá.
    Saída:
    Na saída você deverá imprimir a pirâmide com o caractere ‘#’, conforme a
    quantidade de linhas solicitadas, e nos locais vagos, usar o caracter ‘>’, como no
    exemplo abaixo.
    */
    
    int altura; // altura
    cin >> altura;

    for (int i = 1; i <= altura; i++)
    {
        for (int j = 0; j < (altura - i); j++) // se a piramide for 7, como o primeiro i vale 1, vão ser impressos 6 ">"
        {                                        // na segunda vez do loop o i vai valer 2, então vão ser impressos 7-2=5 ">"
            cout << ">";                         // e assim por diante...
        }

        for (int k = 0; k < i; k++) // na primeira vez o i vale 1, e enquanto o k (vale 0) for menor que o i (vale 1), ele vai imprimir 1 "#"
        {                           // na segunda vez o i vale 2, e o k volta a valer 0, então ele vai imprimir 2 "#"
            cout << "#";            // e assim por diante...
        }

        cout << endl;
    }

    return 0;
}