//incluir biblioteca
#include <iostream>
using namespace std;
//abertura do código
int main() {
   //declaração de variáveis 
   int num, i = 1;
   //interface do usuário para inserir valor
   cout << "Digite um numero inteiro positivo: ";
   //variável que vai receber o número inserido pelo usuário
   cin >> num;
   //condição estabelecida
   while (i <= num){
       //interface do usuário com o resultado da contagem
       cout << i << " ";
       i++;
    }
    //retornar ao início
    return 0;
}