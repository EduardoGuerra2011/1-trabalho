#include <iostream>

using namespace std;

int main() {
    int numero;

    for (int i=0;i<1; i=0)  {
    cout << "Diz um numero de 0 a 3:\n";
    cout << "Se escolher o numero 0:Sair do programa\n";
    cout << "Se escolher o numero 1:Es um bom programador\n";
    cout << "Se escolher o numero 2:Es um muito bom programador\n";
    cout << "Se escolher o numero 0:Es um excelente programador\n";
    cin >> numero;

    switch(numero)
    {
        case 1:
            cout << "Es um bom programador\n";
            break;
        case 2:
            cout << "Es um muito bom programador\n";
            break;
        case 3:
            cout << " es um excelente programador\n";
            break;
        case 0:
            cout << "A sair do programa\n";
            break;
        default:
            cout << "nao e um numero que eu pedi\n";
            break;
    }
    if (numero == 0) break;

    }
    return 0;

}


