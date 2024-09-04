#include <iostream>

using namespace std;

int main()
{
    long long codigo_barra;
    int d12, d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1, d0, total;

    cout << "Digite o Codigo de Barras." << endl;
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

        cout << d0 << endl
             << d1 << endl
             << d2 << endl
             << d3 << endl
             << d4 << endl
             << d5 << endl
             << d6 << endl
             << d7 << endl
             << d8 << endl
             << d9 << endl
             << d10 << endl
             << d11 << endl
             << d12 << endl;

        d12 *= 1;
        d11 *= 3;
        d10 *= 1;
        d9 *= 3;
        d8 *= 1;
        d7 *= 3;
        d6 *= 1;
        d5 *= 3;
        d4 *= 1;
        d3 *= 3;
        d2 *= 1;
        d1 *= 3;

        total = d12 + d11 + d10 + d9 + d8 + d7 + d6 + d5 + d4 + d3 + d2 + d1;

        int digito_verificador = (((total / 10) + 1) * 10) - total;

        cout << "Total:\t" << total << endl;
        cout << "Total Dividido:\t" << total / 10 << endl;
        cout << "Total Dividido  soma 1:\t" << (total / 10) + 1 << endl;
        cout << "Multiplicado por 10 Total Dividido soma 1:\t" << ((total / 10) + 1) * 10 << endl;
        cout << "Digito verificador:\t" << digito_verificador << endl;

        if (digito_verificador >= 10)
        {
            digito_verificador = 0;
        }

        if (digito_verificador == d0)
        {
            cout << "Sim, esta correto o codigo de barra" << endl;
        }
        else
        {
            cout << "Nao esta correto o codigo de barra" << endl;
        }
    }
    else
    {
        cout << "Número de dígitos inválidos. Deve conter ecxatamente 13 dígitos." << endl;
        return 1;
    }
    return 0;
}