//incluir bibliotecas 
#include <iostream>
#include <stdlib.h>
using namespace std;

//abertura do codigo
int main() {
    
    //declaração de variaveis
    double ac1, ac2, af;
    //interface do usuario para inserção de nota
    cout << "Digite a sua nota na AC1 do semestre >>> ";
    //variavel que receberá o valor inserido pelo usuário
    cin >> ac1;
    //interface do usuario para inserção de nota
    cout << "Digite a sua nota na AC2 do semestre >>> ";
    //variavel que receberá o valor inserido pelo usuário
    cin >> ac2;
    //interface do usuario para inserção de nota
    cout << "Digite a sua nota na Avaliação Final do semestre >>> ";
    //variavel que receberá o valor inserido pelo usuário
    cin >> af;
    
    //calculo do peso da nota de ac1
    ac1 = (ac1 * 0.15);
    //calculo do peso da nota de ac2
    ac2 = (ac2 * 0.35);
    //calculo do peso da nota de af
    af = (af * 0.50);

    //calculo da soma das notas    
    double soma = (ac1 + ac2 + af);

    //interface do usuario com o resultado
    cout << "A sua média no semestre foi: " << soma << endl;
    //condicional se a nota for igual ou maior à media estabelecida
    if(soma >= 5){
        //interface do usuario com resultado positivo
        cout << "Parabéns! Você foi aprovado!" << endl;
        }
        //condicional se não atendeu à anterior
        else{
            //interface do usuario com o resultado negativo
            cout << "Eita! Você foi reprovado!" << endl;
        }
    //voltar ao início
    return 0;
}