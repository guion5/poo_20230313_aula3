//incluir biblioteca
#include <iostream>
using namespace std;

//declaração de variávels
float Soma (float a, float b)
{
    float Resultado1;
    //calculo das variáveis (soma)
    Resultado1 = a + b;
    //resultado do calculo das variáveis (a,b)
    return Resultado1;
}

//declaração de variávels
float Subt (float a, float b)
{
    float Resultado2;
    //calculo das variáveis (subtração)
    Resultado2 = a - b;
    //resultado do calculo das variáveis (a,b)
    return Resultado2;
}

//declaração de variávels
float Mult (float a, float b)
{
    float Resultado3;
    //calculo das variáveis (multiplicação)
    Resultado3 = a * b;
    //resultado do calculo das variáveis (a,b)
    return Resultado3;
}

//declaração de variávels
float Divi (float a, float b)
{
    float Resultado4;
    //calculo das variáveis (divisão)
    Resultado4 = a / b;
    //resultado do calculo das variáveis (a,b)
    return Resultado4;
}
//abertura do código
int main() {
    //interface do usuário com o resultado do primeiro calculo (valores fixos)
    cout << Soma (3,5) << endl;
    //interface do usuário com o resultado do segundo calculo (valores fixos)
    cout << Subt (3,5) << endl;
    //interface do usuário com o resultado do terceiro calculo (valores fixos)
    cout << Mult (3,5) << endl;
    //interface do usuário com o resultado do quarto calculo (valores fixos)
    cout << Divi (3,5) << endl;
}