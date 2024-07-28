#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    /*
    Entrada
    A entrada consiste de três números inteiros: A,M,C, que representam respectivamente a
    quantidade de fragmentos de aço valiriano, pedaços de madeira e tiras de couro.
    Saída
    Seu programa deverá imprimir a quantidade máxima de espadas que Gendry poderá forjar.
    */

    int A,M,C;
    cin>>A>>M>>C;

    int TA,TM,TC;
    TA = A/2;
    TM = M/3;
    TC = C/5;

    int smallest[] = {TA, TM, TC};
    int size = sizeof(smallest) / sizeof(smallest[0]);
    int* espada = std::min_element(smallest, smallest + size);

    //if (TA > TM || TM > TA || TA > TC || TC > TA || TM > TC || TC > TM)
    std::cout << *espada << std::endl;
    
    return 0;
}