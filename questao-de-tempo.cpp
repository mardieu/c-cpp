#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    /*
    Entrada
    A entrada é composta por seis inteiros “A”, “B”, “C”, “D”, “E” e “F”, representando
    respectivamente, para qual ano cada um dos irmãos de Five foi transportado, na seguinte ordem:
    Luther, Diego, Alisson, Klaus, Ben e Viktor. Saiba que 1 <= A, B, C, D, E, F <= 4000.
    Saída
    A saída esperada é uma linha para cada integrante da família, mostrando o nome na
    ordem que eles aparecem no enunciado acima (Luther, Diego, Alisson, Klaus, Five, Ben e Viktor),
    seguido de quantos anos essa pessoa viajou no tempo.
    OBS: Five parte de 2023 e volta para 2023 para buscar cada irmão.*/

    // teste 1 = 2001 1980 1960 1879 2080 1790
    // teste 2 = 2021 1998 2068 1945 2009 1989

    int A, B, C, D, E, F; // na ordem: Luther, Diego, Alisson, Klaus, Ben e Viktor.

    cin >> A >> B >> C >> D >> E >> F;

    A = abs((2023 - A) * 2);
    B = abs((2023 - B) * 2);
    C = abs((2023 - C) * 2);
    D = abs((2023 - D) * 2);
    E = abs((2023 - E) * 2);
    F = abs((2023 - F) * 2);

    int five = A + B + C + D + E + F;

    cout << "Luther " << A << endl;
    cout << "Diego " << B << endl;
    cout << "Alisson " << C << endl;
    cout << "Klaus " << D << endl;
    cout << "Five " << five << endl;
    cout << "Ben " << E << endl;
    cout << "Viktor " << F << endl;

    return 0;
}