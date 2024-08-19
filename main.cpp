#include <iostream>

int main() {
    long long int codigo;
    // menor número com 13 dígitos possível - 1.000.000.000.000
    // maior número com 13 dígitos possível - 9.999.999.999.999
    long long int numeroMaximo13Digitos = 9999999999999;
    long long int numeroMinimo13Digitos = 1000000000000;

    // solicita ao usuário que insira o código de barras
    std::cout << "Insira o código de barras (13 dígitos): ";
    std::cin >> codigo;


    // verifica se o codigo de barras tem 13 digitos
    if (codigo < numeroMinimo13Digitos || codigo > numeroMaximo13Digitos) {
        std::cerr << "Número inválido. O número deve ter exatamente 13 dígitos." << std::endl;
    }

    // para extrair cada digito, usamos a operação de modulo (%) para obter o ultimo digito, e dividimos o codigo por 1- para remover o ultimo digito e ir para o prximo digito
    int digito13 = codigo % 10;
    codigo /= 10;
    int digito12 = codigo % 10;
    codigo /= 10;
    int digito11 = codigo % 10;
    codigo /= 10;
    int digito10 = codigo % 10;
    codigo /= 10;
    int digito9 = codigo % 10;
    codigo /= 10;
    int digito8 = codigo % 10;
    codigo /= 10;
    int digito7 = codigo % 10;
    codigo /= 10;
    int digito6 = codigo % 10;
    codigo /= 10;
    int digito5 = codigo % 10;
    codigo /= 10;
    int digito4 = codigo % 10;
    codigo /= 10;
    int digito3 = codigo % 10;
    codigo /= 10;
    int digito2 = codigo % 10;
    codigo /= 10;
    int digito1 = codigo % 10;

    // tira o modulo de todos os digitos para verificar se é igual a 1, caso for, o numero é impar e deve ser multiplicado por 3
    if (digito1 % 2 == 1) {
        digito1 *= 3;
    }
    if (digito2 % 2 == 1) {
        digito2 *= 3;
    }
    if (digito3 % 2 == 1) {
        digito3 *= 3;
    }
    if (digito4 % 2 == 1) {
        digito4 *= 3;
    }
    if (digito5 % 2 == 1) {
        digito5 *= 3;
    }
    if (digito6 % 2 == 1) {
        digito6 *= 3;
    }
    if (digito7 % 2 == 1) {
        digito7 *= 3;
    }
    if (digito8 % 2 == 1) {
        digito8 *= 3;
    }
    if (digito9 % 2 == 1) {
        digito9 *= 3;
    }
    if (digito10 % 2 == 1) {
        digito10 *= 3;
    }
    if (digito11 % 2 == 1) {
        digito11 *= 3;
    }
    if (digito12 % 2 == 1) {
        digito12 *= 3;
    }


    // soma todos so 12 primeiros digitos
    int somatorioDigitos = digito1 + digito2 + digito3 + digito4 + digito5 + digito6 + digito7 + digito8 + digito9 + digito10 + digito11 + digito12;

    // divide a soma dos 12 primeiros digitos por 10
    int verificador = somatorioDigitos / 10;

    // adiciona 1 ao verificador, depois multiplica por 10 e subtrai pela somatoria dos 12 primeiros digitos
    verificador = (verificador + 1) * 10 - somatorioDigitos;

    // verifica se o verificador é multiplo de 10, caso for, divide ele por 10.
    if (verificador % 10 == 0) {
        verificador /= 10;
    }

    //caso o verificador for diferente do decimo terceiro digito, o verificador esta inconsistente
    if (verificador !=  digito13) {
        std::cout << "O codigo de barras não é valido, pois seu verificador é inconsistente. " << std::endl;
    }

    // caso passe de todas as verificações, informa ao usuario que o codigo de barras esta correto
    std::cout << "Código de barras correto. " << verificador << std::endl;

    return 0;
}
