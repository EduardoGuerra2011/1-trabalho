#include <iostream>

using namespace std;

int main () {
    int numero;
    cout << "Diz um numero:";
    cin >> numero;
    if(numero<0) {
        cout << "numero negativo";
    }
    else if(numero==0) {
        cout << "numero neutro";
    }
    else if(numero>0<100) {
        cout << "numero positivo pequeno";
    }
    else if(numero>100) {
        cout << "numero enorme";
    }

    return 0;
}
