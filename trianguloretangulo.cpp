// inserir biblioteca
#include <iostream>
using namespace std;
//abertura do codigo
int main(){
    // declarar variaveis do triangulo retangulo  
    float base, altura, area;
    // interface do usuario - inserir valor da base do triangulo
    cout << "Digite a base do triangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> base;
    // interface do usuario - inserir valor da altura do triangulo
    cout << "Digite a altura do triangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> altura;
    // calculo da area do triangulo retangulo
    area = (base * altura)/2;
    // interface do usuario - resultado
    cout << "A area do triangulo retangulo eh: " << area << endl;
    
    return 0;
}