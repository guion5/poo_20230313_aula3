// inserir biblioteca
#include <iostream>
using namespace std;
//abertura do codigo
int main(){
    // declarar variaveis  
    float base, altura, area;
    // interface do usuario - inserir valor da base
    cout << "Digite a base do triangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> base;
    // interface do usuario - inserir valor da altura
    cout << "Digite a altura do triangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> altura;
    // calculo da area do triangulo
    area = (base * altura) / 2;
    // interface do usuario - resultado
    cout << "A área do triangulo eh: " << area << endl;
    
    return 0;
}