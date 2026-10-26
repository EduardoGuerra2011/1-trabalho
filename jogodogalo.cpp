#include <iostream>


using namespace std;


int main()
{
    int posicao = 0;
    string peca = "X";
    string p1 = "1",p2 = "2",p3 = "3",p4 = "4",p5 = "5",p6 = "6",p7 = "7",p8 = "8",p9 = "9";
    bool jogoTerminou = false, aceitaJogada = true;


    while (!jogoTerminou) {


        cout << "\n " << p1 << "|" << p2 << "|" << p3;
        cout << "\n " << p4 << "|" << p5 << "|" << p6;
        cout << "\n " << p7 << "|" << p8 << "|" << p9;
        cout << "\n diz onde queres jogar: ";
        cin >> posicao;


        switch(posicao) {
        case 1:
            if (p1 == "1") {
                p1 = peca;
                aceitaJogada = true;
            }
            break;
        case 2:
            if (p2 == "2") {
                p2 = peca;
                aceitaJogada = true;
            }
            break;
        case 3:
            if (p3 == "3") {
                p3 = peca;
                aceitaJogada = true;
            }
            break;
        case 4:
            if (p4 == "4") {
                p4 = peca;
                aceitaJogada = true;
            }
            break;
        case 5:
            if (p5 == "5") {
                p5 = peca;
                aceitaJogada = true;
            }
            break;
        case 6:
            if (p6 == "6") {
                p6 = peca;
                aceitaJogada = true;
            }
            break;
        case 7:
            if (p7 == "7") {
                p7 = peca;
                aceitaJogada = true;
            }
            break;
        case 8:
            if (p8 == "8") {
                p8 = peca;
                aceitaJogada = true;
            }
            break;
        case 9:
            if (p9 == "9") {
                p9 = peca;
                aceitaJogada = true;
            }
            break;
        default:
            cout << "\nBurrinho da silba .. 1 a 9 apenas\n";
            break;
        }
        if (aceitaJogada) {
            if (peca == "X") {
                peca = "O";
            } else {
                peca = "X";
            }
        } else {
            cout << "\nPosicao ja preenchida \n";
        }


    }






 return 0;
}
