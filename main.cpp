#include <iostream>

using namespace std;

int main()
{
    //declaração de variaveis
    long long codigo_barra;
    int d12, d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1, d0, total, digito_verificador;

    
    cout << "Digite o Codigo de Barras." << endl; //solicita o código de barra ao usuário.
    
    cin >> codigo_barra; //solicita o codigo de barra ao usuário.

    if (codigo_barra > 0 and codigo_barra <= 9999999999999) // verifica se o código tem menos que 9999999999999 (maior número com 13 dígitos) e que seja mior que 0  
    { //caso o código de barras entre na condição o código continua, caso contrário irá informar ao usuário que o código de barras é inválido.

        //tira o mod por 10, para pegar o último dígito do código de barras, e divide por 10 para após atribuir, remover:
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

        //caso a posição do dígito, for ímpar, multiplica ela por 3.
        d11 *= 3;
        d9 *= 3;
        d7 *= 3;
        d5 *= 3;
        d3 *= 3;
        d1 *= 3;
        
        total = d12 + d11 + d10 + d9 + d8 + d7 + d6 + d5 + d4 + d3 + d2 + d1; //total recebe a soma de d1 até d12.

        digito_verificador = total; //dígito verificador recebe o valor de total.
        digito_verificador /= 10; //dígito verificador recebe ele mesmo dividido por 10.
        digito_verificador += 1; //recebe ele mesmo + 1.
        digito_verificador *= 10; //recebe ele mesmo multiplicado por 10.
        digito_verificador -= total; //recebe ele mesmo, menos o valor da variavel total.

        if (digito_verificador >= 10) //se o dígito verificador for maior ou igual a 10.
        {
            digito_verificador = 0; //recebe 0.
        }

        if (digito_verificador == d0) //se o dígito verificador for igual a variavel d0,
        {
            cout << "Codigo de barras correto." << endl; //informa ao usuario que o codigo de barras esta correto.
        }
        else
        {
            cout << "Digito verificador inconsistente." << endl; //se não, informa que o verificador é inconscistente
            return 1;
        }
    }
    else
    {
        cout << "Numero de digitos invalidos." << endl; //informa que o número de digitos é inválido.
        return 1;
    }
    return 0; //return 0 para encerrar o programa com êxito.
}