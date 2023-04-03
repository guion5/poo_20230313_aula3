//incluir biblioteca 
#include <iostream>
using namespace std;

//abertura do codigo
int main() {

    //declaração de variáveis (numeros inteiros)
    int num1 = 10, num2 = 4;
    //declaração das variáveis (operadores) 
    int soma, multi, divi, modulo, subt;
    
    //calculo da soma das variaveis
    soma = num1 + num2;
    //calculo da multiplicação das variaveis
    multi = num1 * num2;
    //calculo da divisão das variaveis
    divi = num1 / num2;
    //calculo do resto das variaveis
    modulo = num1 % num2;
    //calculo da subtração das variaveis
    subt = num1 - num2;
    
    //interface do usuario com o resultado da soma
    cout<<soma<<endl;
    //interface do usuario com o resultado da multiplicação
    cout<<multi<<endl;
    //interface do usuario com o resultado da divisão
    cout<<divi<<endl;
    //interface do usuario com o resultado do resto
    cout<<modulo<<endl;
    //interface do usuario com o resultado da subtração
    cout<<subt<<endl;
    
    //voltar ao início
    return 0;
}