#include <iostream>

using namespace std;

int main () {
    string operacao;
    float n1,n2;
    float calculo;

    cout << "Operacoes possiveis:\n";
    cout << "somar\n";
    cout << "subtracao\n";
    cout << "multiplicacao\n";
    cout << "divisao\n";

    cout << "Diga qual operacao quer efetuar:";
    cin  >> operacao;

    cout << "Diz o 1.num  ";
    cin  >> n1;
    cout << "Diz o 2.num  ";
    cin  >> n2;
    if (operacao=="somar") {
        cout << "Soma =" << (n1+n2);
    }
   else if (operacao=="subtrair") {
        cout << "Subtracao =" << (n1-n2);
    }
   else if (operacao=="multiplicacao") {
        cout << "Multiplicacao =" << (n1 * n2);
    }
   else if (operacao=="divisao") {

        if (n2==0) {
        cout << "Impossivel fazer o calculo";

         }else{
        calculo = (n1) / (n2);
        cout << "Divisao =" << calculo;
         }
    } else {
        cout << "o que raios queres fazer !!";


    }

}
