#include <iostream>
using namespace std;

int main()
{
    /*
    Entrada
    A entrada possui uma sequência de 6 números (t1, t2, …, t6), sendo (1 <= ti <= 10)
    representando os valores em ouro dos tesouros encontrados até agora. Sua tarefa é
    dizer o valor total de tesouros do bando.
    Saída
    A saída consiste em uma única linha contendo um número inteiro: A soma do valor de
    todos os tesouros dos Chapéus de Palha.
    */
    int t1, t2, t3, t4, t5, t6;
    cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6;
    cout << t1 + t2 + t3 + t4 + t5 + t6 << endl;

    return 0;
}