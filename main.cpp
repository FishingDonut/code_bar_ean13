#include <iostream>

using namespace std;

int main()
{
    long long codigo_barra;
    int d12, d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1, d0;

    cout << "Digite o code" << endl;
    cin >> codigo_barra;

    if (codigo_barra > 0 and codigo_barra < 9999999999999LL) {

        d0 = codigo_barra % 10;
        codigo_barra /= 10;
        d1 = codigo_barra % 10;
        codigo_barra /= 10;
        d2 = codigo_barra % 10;
        codigo_barra /= 10;
        d3 = codigo_barra % 10;
        codigo_barra /= 10;
        d4 = codigo_barra % 10;
        codigo_barra /= 10;
        d5 = codigo_barra % 10;
        codigo_barra /= 10;
        d6 = codigo_barra % 10;
        codigo_barra /= 10;
        d7 = codigo_barra % 10;
        codigo_barra /= 10;
        d8 = codigo_barra % 10;
        codigo_barra /= 10;
        d9 = codigo_barra % 10;
        codigo_barra /= 10;
        d10 = codigo_barra % 10;
        codigo_barra /= 10;
        d11 = codigo_barra % 10;
        codigo_barra /= 10;
        d12 = codigo_barra % 10;

        cout << d0 << endl << d1 << endl<< d2 << endl<< d3 << endl<< d4 << endl<< d5 << endl<< d6 << endl<< d7 << endl<< d8 << endl<< d9 << endl<< d10 << endl << d11 << endl<< d12 << endl;

    } else {
        cout << "Número de dígitos inválidos. Deve conter ecxatamente 13 dígitos." << endl;
        return 1;
    }
    return 0;
}