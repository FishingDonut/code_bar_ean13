#include <iostream>

using namespace std;

int main()
{
    long long codigo_barra;
    int d12, d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1, d0, total, digito_verificador;

    cout << "Digite o Codigo de Barras." << endl;
    cin >> codigo_barra;

    if (codigo_barra > 0 and codigo_barra <= 9999999999999LL)
    {

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

        digito_verificador = total;
        digito_verificador /= 10;
        digito_verificador += 1;
        digito_verificador *= 10;
        digito_verificador -= total;

        if (digito_verificador >= 10)
        {
            digito_verificador = 0;
        }

        if (digito_verificador == d0)
        {
            cout << "Codigo de barras correto." << endl;
        }
        else
        {
            cout << "Digito verificador inconsistente." << endl;
        }
    }
    else
    {
        cout << "Numero de digitos invalidos." << endl;
        return 1;
    }
    return 0;
}