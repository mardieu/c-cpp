#include <iostream>
using namespace std;

int main(){

    /*
    Entrada
    A entrada consiste na primeira linha de um número inteiro ‘N’ (1 < N < 100)
    que representa o número de campeões favoritos de Lucas. Nas próximas ‘N’ linhas
    será fornecido em cada uma, um número inteiro ‘P’ (0 <= P <= 10000) que representa
    o nível de poder de cada um dos ‘N’ campeões.
    Saída
    A saída deverá conter apenas o nível de poder do campeão mais forte.
    */

    int N, largest; // champs n
    cin>>N;

    int P; // champs power levels

    int i = 0;
    while (i < N)
    {
        cin>>P;
        if (P > largest)
            largest = P;
        i++;
    }
    cout << largest << endl;

    return 0;
}