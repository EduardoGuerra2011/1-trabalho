#include <iostream>

using namespace std;
#define N 10


int main()  {

    int arrayNums[N];
    int soma = 0;

    for(int i = 0;i < N;i++)    {

        cout << "\nDiga o num #" << i + 1 << ": ";
        cin >> arrayNums[i];
    }

    cout << "\nA conta : 0";
    for(int i = 0;i < N;i++)    {

        soma += arrayNums[i] * arrayNums[i];
    }
    cout << "\nO resultado final = " << soma;

    return 0;
}
