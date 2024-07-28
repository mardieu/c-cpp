#include <iostream>
using namespace std;

int main(){

/*
Entrada
Seu programa receberá primeiramente um inteiro ‘N’ (1 ≤ ‘N’ ≤ 100) e um inteiro
‘XP’ (1 ≤ ‘XP’ ≤ 100), que representam respectivamente, a quantidade de missões a serem
realizadas igualmente por Yoda, Luke e Ahsoka, seguido da quantidade de XP que estes
ganharão ao completar cada missão. Na linha seguinte serão dados 3 inteiros que
representam os respectivos níveis iniciais de XP ‘XPi’ (1 <= ‘XPi’ <= 1500) de Yoda, Luke e
Ahsoka.
Saída
Para cada Jedi, Yoda, Luke e Ahsoka, nessa ordem, você deverá imprimir uma
linha com seu nome e seu novo ‘XP’, separados por espaço. Portanto, assuma que eles já
cumpriram todas as novas missões ao imprimir seus dados.
*/

    int N, XP;
    int XPi_Yo,XPi_Lu, XPi_Ah;

    cin>>N>>XP;
    cin>>XPi_Yo>>XPi_Lu>>XPi_Ah;

    int XP_GAIN = N * XP;

    cout<<"Yoda "<<XPi_Yo+XP_GAIN<<endl;
    cout<<"Luke "<<XPi_Lu+XP_GAIN<<endl;
    cout<<"Ahsoka "<<XPi_Ah+XP_GAIN<<endl;

    return 0;
}