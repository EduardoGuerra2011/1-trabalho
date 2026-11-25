#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga = 1;
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro(tabuleiro);

    tabuleiro[3][6] = "s";

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);


    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    return 0;
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    cout << "\n\n    4 EM LINHA\n\n";
    for(int i = LINHAS - 1;i >= 0;i--)    {

        cout << "|";

        for(int j = 0;j < COLUNAS;j++)    {
            cout << arr[i][j] << "|";
        }
        cout << "\n";
    }

    cout << "-------------------\n";

    for(int i = 0;i < COLUNAS;i++)    {
            cout << "|" << i;
        }
        cout << "|\n";

}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {

    for(int i = 0;i < LINHAS;i++)    {
        for(int j = 0;j < COLUNAS;j++)    {

            arr[i][j] = " ";
        }
    }
}
int pedePecaJogador() {

    int Coluna;

    cout << "Diz me a coluna que queres jogar:";
    cin >> Coluna;



    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return true;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}
