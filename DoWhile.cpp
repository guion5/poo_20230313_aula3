// incluir biblioteca
#include <iostream>
using namespace std;

//abertura do código
int main() {
   //declaração de variável
   int num;
   
   //açao inicial
   do {
       //interface do usuário para inserção do valor inteiro   
       cout << "Digite um numero entre 1 e 10: ";
       //variável que irá receber o valor inserido pelo usuário
       cin >> num;
       //condição caso o usuário digite outro número
       } while (num < 1 || num > 10);
       // interface do usuário com a resposta
       cout << "Você digitou o número " << num << ".";

    //volta ao início
    return 0;
}