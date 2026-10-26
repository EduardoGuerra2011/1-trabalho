#include <iostream>
using namespace std;

int main ()
{
    float ganhohora,horasmes;

    cout << "Quanto ganhas por hora:";
    cin >> ganhohora;
    cout << "Quantas horas trabalhas por mes:";
    cin >> horasmes;

    ganhohora = ganhohora * horasmes;
    horasmes = ganhohora * 12;

    cout <<  "Ganhas no mes " << ganhohora << " e no ano ganhas " << horasmes << ".";

    return 0;
}
