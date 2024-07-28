#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    /*
    Entrada
    Será dado um número inteiro N (1 <= N <= 100000000) que representa o tempo do
    evento em segundos.
    Saída
    Contém o tempo dado em segundos convertido para horas, minutos e segundos,
    como nos exemplos abaixo.
    */

    int tempo_inicial; // em segundos
    cin>>tempo_inicial;
    int horas = tempo_inicial / 3600;
    int minutos = (tempo_inicial % 3600)/60;
    
    int segundos = (((tempo_inicial % 3600)%60));
    cout<<horas<<"h ";
    cout<<minutos<<"m ";
    cout<<segundos<<"s"<<endl;
    return 0;
}