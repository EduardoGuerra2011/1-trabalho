#include <iostream>

using namespace std;

int main()  {

    int quantos;
    float quais[quantos],soma;

    cout << "Diz me quantos numeros queres somar:";
    cin >> quantos;



    for(int i = 1;i <= quantos;i++) {

        cout << "Diz me qual numeros queres somar:";
        cin >> quais[quantos];

        soma = quais[1] + quais[2] + quais[3];
        cout << soma;


        }

    return 0;
}

