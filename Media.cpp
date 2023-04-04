//incluir bibliotecas 
#include <iostream>
#include <stdlib.h>
using namespace std;

//abertura do codigo
int main() {

    //declaração de variaveis    
    double nota1, nota2, nota3, nota4;
    //variavel para resetar o programa
    char resposta;

//condicional de ação
do {
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
 
    //condicional dividida em 'casos' levando em conta o valor da media
   switch((int)soma) {
        
        //caso o aluno tirou nota 10
        case 10:
        //caso o aluno tirou nota 9
        case 9:
        //caso o aluno tirou nota 8
        case 8:
        //caso o aluno tirou nota 7
        case 7:
        //interface do usuario com o resultado positivo (media igual ou maior para ser aprovado)
        cout << "Parabéns! Você foi aprovado!" << endl;
        //encerra a switch
        break;

        //caso o aluno tirou nota 6
        case 6:
        //caso o aluno tirou nota 5
        case 5:
        //interface do usuario com a mensagem de recuperação (média nao atingida)
        cout << "Você está em recuperação. Deverá fazer uma prova substitutiva" << endl;
        //encerra a switch
        break;

        //padrão caso a soma da media não atenda nenhuma das condicionais acima
        default:
        //interface do usuario com a mensagem de reprovação (média nao atingida e menos q o minimo para fazer a ps)
        cout << "Infelizmente você foi reprovado!" << endl;
        //encerra a switch
        break;
      }

        //interface do usuario para reiniciar o programa
        cout << "Deseja calcular a média de novo? (S/N) >>> ";
        //variavel onde é inserida a resposta do usuário
        cin >> resposta;
       //condicional de resposta
      }while(resposta == 'S' || resposta == 's'); 

    //retornar ao início
    return 0;
}