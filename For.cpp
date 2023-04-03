// Incluir biblioteca
#include <iostream>
using namespace std;

//abertura do código
int main() {
   //declaração de variável
   int num;
       
       //interface do usuário para inclusão de valor  
       cout << "Digite um numero inteiro positivo: ";
	 //variável que recebe o valor digitado pelo usuário	
       cin >> num;
       
	 //interface do usuário com o resultado de números inteiros pares até o valor inserido
       cout << "Os primeiros " << num << " numeros pares sao: ";
      //equações para definir os números pares que irão ser mostrados para o usuário (inclusão da variável 'i') 
	for (int i = 2; i <= num *2; i += 2){
	     //interface do usuário com o resultado	
           cout << i << " ";
       }    
       // retornar ao início 
       return 0;
}