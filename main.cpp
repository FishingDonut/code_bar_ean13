#include <iostream>

using namespace std;

int main()
{
    // define as variaveis
    long long codigo_barra;
    int d12, d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1, d0, total, digito_verificador;

    // passa a instruçao ao usuario
    cout << "Digite o Codigo de Barras." << endl;
    cin >> codigo_barra;

    // verifica o tamanho do codigo de barras passado
    if (codigo_barra > 0 and codigo_barra <= 9999999999999LL)
    {
        // Usa o modulo para pegar o ultimo digito da direita e divide a operaçao em 10 para retirar o ultimo digito da direita
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

        // multiplica por 3 os numeros impares e os pares por 1.
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

        // soma os digitos menos o digito verificador d0
        total = d12 + d11 + d10 + d9 + d8 + d7 + d6 + d5 + d4 + d3 + d2 + d1;

        // faz o calculo para obter o digito verificador
        digito_verificador = total;
        digito_verificador /= 10;
        digito_verificador += 1;
        digito_verificador *= 10;
        digito_verificador -= total;

        // verifica se e multiplo de 10
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