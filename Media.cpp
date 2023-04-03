//incluir bibliotecas 
#include <iostream>
#include <stdlib.h>
using namespace std;

//abertura do codigo
int main() {

    //declaração de variaveis    
    double nota1, nota2, nota3, nota4;

    //interface do usuario para inserção da 1ª nota
    cout << "Digite a sua primeira nota do semestre >>> ";
    //variavel que recebe o valor digitado pelo usuario 
    cin >> nota1;

    //interface do usuario para inserção da 2ª nota
    cout << "Digite a sua segunda nota do semestre >>> ";
    //variavel que recebe o valor digitado pelo usuario 
    cin >> nota2;

    //interface do usuario para inserção da 3ª nota
    cout << "Digite a sua terceira nota do semestre >>> ";
    //variavel que recebe o valor digitado pelo usuario 
    cin >> nota3;

    //interface do usuario para inserção da 4ª nota
    cout << "Digite a sua quarta nota do semestre >>> ";
    //variavel que recebe o valor digitado pelo usuario 
    cin >> nota4;
    
    //calculo da soma das notas
    double soma = (nota1 + nota2+ nota3 + nota4);
    //calculo da media das notas
    soma = (soma/4);

    //interface do usuario com o resultado da media
    cout << "A sua média no semestre foi: " << soma << endl;
 
    //condicional maior ou igual a media estabelecida
   if(soma >= 7){

        //interface do usuario com o resultado positivo
        cout << "Parabéns! Você foi aprovado!" << endl;
        }
        //condicional "se não"
        else{
        //interface do usuario com o resultado negativo
            cout << "Eita! Você foi reprovado!" << endl;
        }
    //retornar ao início
    return 0;
}