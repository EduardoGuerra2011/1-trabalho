#include <iostream>
using namespace std;

int main ()
{
    float raio;


    cout << "Diz me o raio de um circulo que eu vou calcular a area do circulo:";
    cin >> raio;

    raio = 3.1416 * raio * raio;

    cout <<  "A area do circulo e " << raio << ".";

    return 0;
}
