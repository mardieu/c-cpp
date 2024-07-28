#include <iostream>
using namespace std;

int main(){

    /*
    Entrada
    Considerando as três áreas secretas, a entrada consiste nos itens que você
    conseguiu encontrar, sendo três números inteiros ‘SC’ (0 <= SC <= 30), ‘MM’ (0 <=
    MM <= 6) e ‘CK’ (0 <= CK <= 3) representando, respectivamente, Star Coins, Mega
    Mushrooms e Carapaças Koopa Azul.
    Saída
    A saída consiste em uma única linha. Caso você não tenha encontrado todas as
    Star Coins, deve ser impresso a quantidade de itens ainda por serem descobertos
    no mundo atual, sendo impresso primeiro a quantidade de Star Coins, seguido
    pela quantidade de Mega Mushrooms e por fim, a quantidade de Carapaças
    Koopa Azul. Caso você tenha conseguido encontrar todas as Star Coins você deve
    imprimir a mensagem “PROXIMO MUNDO”.*/

    // ganhar = todas as 240 star coins
    // mundo todo = 240 star coins 

    int SC; //star coins
    int MM; //mega mushrooms
    int CK; //carapaça koopa

    cin>>SC>>MM>>CK;

    if (SC == 30)
    {
        cout << "PROXIMO MUNDO"<<endl;
    }else
    {
        cout << (30-SC) << " " << (6-MM) << " " << (3-CK) << endl;
    }

    return 0;
}