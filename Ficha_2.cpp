#include <iostream>

using namespace std;

int main() {
int numero;
    cout << "Diz um numero de 0 a 3:\n";
    {
    cout << "Se escolher o numero 0:Sair do programa\n";
    cout << "Se escolher o numero 1:Es um bom programador\n";
    cout << "Se escolher o numero 2:Es um muito bom programador\n";
    cout << "Se escolher o numero 0:Es um excelente programador\n";
    cin >> numero;
    }
    switch(numero)
    {
    case 1:
    cout << "Es um bom programador";
    break;
    case 2:
    cout << "Es um muito bom programador";
    break;
    case 3:
    cout << " es um excelente programador";
    break;
    case 0:
    cout << "A sair do programa";
    default:
    cout << "nao e um numero que eu pedi";
    }
    return 0;

}
