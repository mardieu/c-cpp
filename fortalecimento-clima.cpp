#include <iostream>
using namespace std;

int main(){

    /*
    Entrada
    A primeira linha da entrada contém um valor ‘N’ (1 <= N <= 1000) que representa o número
    de pokémon que serão fortalecidos pelo clima. Já cada uma das próximas ‘N’ linhas contém o valor
    ‘P’ (1 <= P <= 1000) de pontos de dano do ataque principal de um pokémon e o seu valor ‘M’ (0 <=
    M <= 1000) de acréscimo.
    Saída
    A saída é composta de ‘N’ linhas, cada uma representando o valor final de pontos de dano
    de cada linha da entrada.
    */

    int pokemons; // n° de pokemons fortalecidos pelo clima
    int starter_attack;      // pontos de ataque INICIAL
    int addup;      // acrescimo nos pontos

    cin>>pokemons;
    for (int i = 0; i < pokemons; i++)
    {
        cin>>starter_attack>>addup;

        int total = starter_attack+addup;

        cout << total << endl;
    }

    return 0;
}