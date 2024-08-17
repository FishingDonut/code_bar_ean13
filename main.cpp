#include <iostream>

using namespace std;

int main()
{
    // apresentacao
    cout << "----Codigo de barra----";
    cout << "\nDigite os codigos de barras quando for solicitado.";

    // definindo dados
    int d12, d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1, d0, total;

    cout << "\nD12: ";
    cin >> d12;

    cout << "\nD11: ";
    cin >> d11;

    cout << "\nD10: ";
    cin >> d10;

    cout << "\nD9: ";
    cin >> d9;

    cout << "\nD8: ";
    cin >> d8;

    cout << "\nD7: ";
    cin >> d7;

    cout << "\nD6: ";
    cin >> d6;

    cout << "\nD5: ";
    cin >> d5;

    cout << "\nD4: ";
    cin >> d4;

    cout << "\nD3: ";
    cin >> d3;

    cout << "\nD2: ";
    cin >> d2;

    cout << "\nD1: ";
    cin >> d1;

    cout << "\nD0: ";
    cin >> d0;

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

    if (digito_verificador >= 10){
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

    return 0;
}