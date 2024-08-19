#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    long long int code;
    int dimp, dpar, dtotal, dval, d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    cout << "Insira um valor com 13 dígitos:\n";
    cin >> code;
    if (code >= 1000000000000 && code <= 9999999999999 ) { // Verificação de tamanho;
        d12 = (code / 1000000000000) % 10;
        d11 = (code / 100000000000) % 10;
        d10 = (code / 10000000000) % 10;
        d9 = (code / 1000000000) % 10;
        d8 = (code / 100000000) % 10;
        d7 = (code / 10000000) % 10;
        d6 = (code / 1000000) % 10;
        d5 = (code / 100000) % 10;
        d4 = (code / 10000) % 10;
        d3 = (code / 1000) % 10;
        d2 = (code / 100) % 10;
        d1 = (code / 10) % 10;
        d0 = code % 10;
        dimp = (d11+d9+d7+d5+d3+d1)*3;
        dpar = d12+d10+d8+d6+d4+d2;
        dtotal = dpar+dimp;
        dval = dtotal/10;
        dval = dval + 1;
        dval = dval * 10;
        dval = dval - d0;
        if(dval == dtotal) {
            cout << "O código " << code << " é válido.";
        } else {
            cout << "Dígito verificador inconsistente.";
        }
    } else {
        cout << "Número de dígitos inválido.";
    }
    return 0;
}
