#include <iostream>
using namespace std;

int main ()
{
    float n1,n2,n3;
    cout << "Diz me um numero:";
    cin >> n1;
    cout << "Diz me outro numero:";
    cin >> n2;
    cout << "Diz me outro numero:";
    cin >> n3;
    cout << "A media destes numeros e:";

    n3 = n1 + n2 + n3;
    n2 = n3 / 3;

    cout << n2;

    return 0;
}
