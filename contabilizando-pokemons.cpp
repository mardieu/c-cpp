#include <iostream>
using namespace std;

/*
Entrada
A entrada é composta de 2 linhas. A primeira linha contém três inteiros que
representam o número de pokémons já registrados na Pokédex de cada região, na
ordem ‘K’ (Kanto), ‘J’ (Johto) e ‘H’ (Hoenn). A segunda linha contém o número de
novos pokémons capturados de cada região na mesma ordem da primeira linha.
Restrições:
(0 <= K,J,H <= 100)
Saída
Imprima, na ordem da entrada (K J H), o número total de pokémons de cada
região após a nova contagem, separados por espaço. Imprima uma quebra de linha no
fim.

*/

int main(){
    int K, J, H; int nK, nJ, nH;
    cin>>K>>J>>H;
    cin>>nK>>nJ>>nH;
    K+=nK; J+=nJ; H+=nH;
    cout<<K<<" "<<J<<" "<<H<<endl;

    return 0;
}