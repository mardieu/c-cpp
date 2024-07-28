#include <iostream>
using namespace std;

int main()
{

    /*
    Entrada
    A entrada é composta por apenas duas linhas contendo dois caracteres em cada. Na primeira
    linha temos "z" e "g", sendo "z" a direção que o zagueiro irá para tentar bloquear o drible do
    atacante e "g" a direção que o goleiro irá tentar defender o chute do atacante. A segunda linha
    contém dois caracteres "d" e "c", que são respectivamente, a direção que o atacante irá tentar
    driblar o zagueiro, e se passar pelo zagueiro, a direção que o atacante irá chutar para o gol. Saiba
    que os valores possíveis para “z”, ”g”, “d” e “c” são esquerda ou direita, representados pelos
    caracteres ‘e’ e ‘d’, respectivamente.
    Saída
    A saída depende das seguintes situações: 1) no caso do zagueiro e atacante irem na mesma
    direção, só haverá uma linha na saída e deve-se imprimir a frase "Bloqueado"; 2) no caso de
    zagueiro e atacante irem em direções opostas, a frase impressa na primeira linha será "Driblado";
    3) caso o atacante tenha passado pelo zagueiro e o atacante chute na mesma direção que o goleiro
    foi para tentar defender, a frase impressa na segunda linha será "...e o goleiro pega"; 4) caso o
    atacante chute para um lado e goleiro vá para o outro a frase na segunda linha será "Gol".
    */
   
    char z; // o zagueiro tentar bloquear o drible do atacante
    char g; // o goleiro tentar defender o chute do atacante.

    char d; // o atacante tentar driblar zagueiro
    char c; // o atacando tentar chutar para o gol (se driblar)

    cin >> z >> g;
    cin >> d >> c;

    if (z == d)
        cout << "Driblado" << endl;
    else if (z != d)
        cout << "Bloqueado" << endl;
    
    if (z == d && c == g)
        cout << "Gol" << endl;
    else if (z == d && c != g)
        cout << "...e o goleiro pega" << endl;

        return 0;
}