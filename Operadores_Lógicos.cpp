//incluir biblioteca 
#include <iostream>
using namespace std;

//abertura do código
int main() {
    //declaração de variáveis (numeros fixos)
    int a = 15;
    int b = 3;
    int c = 10;
    
    //Exemplo de uso de operador AND (&&)
    if (a<b && b<c){
        //interface do usuário se todos atendem a condicional
        cout<<"A ordem é: a, b, c" << endl;
    }
    
    //Exemplo de uso de operador OR (||)
    if (a>b || b>c){
        //interface do usuário se apenas um resultado atende a condicional
        cout << "Pelo menos uma das condicões é verdadeira" << endl;
            }
    
    //Exemplo de uso de operador NOT (!)
    if (!(a==b)){
        //interface do usuário se as variaves nao atendem a condição
        cout << "a é diferente de b" << endl;
    }
    //voltar ao início
    return 0;
}