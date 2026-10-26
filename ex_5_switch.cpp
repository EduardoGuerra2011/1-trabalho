#include <iostream>

using namespace std;

const int MAX_ALUNOS = 30;

int main()
{
    int opcao;

    cout << "1 - Somar  \n";
    cout << "2 - Subtrair  \n";
    cout << "0 - Sair  \n";
    cout << "Opcao: ";

    cin >> opcao;

    switch (opcao)
    {
        case 1:
            cout << "SOMEI";
        break;

        case 2:
            cout << "SUBTRAI";
        break;

        case 0:
            cout << "XUAIZINHO";
        break;

        default:
            cout << "TOU CAFUSO";
        break;


    }
}
