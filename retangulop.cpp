// inserir biblioteca
#include <iostream>
using namespace std;
//abertura do codigo
int main(){
    // declarar variaveis do retangulo  
    float base, altura, perimetro;
    // interface do usuario - inserir valor da base do retangulo
    cout << "Digite a base do retangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> base;
    // interface do usuario - inserir valor da altura do retangulo
    cout << "Digite a altura do retangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> altura;
    // calculo do perimetro do retangulo
    perimetro = 2 * (base + altura);
    // interface do usuario - resultado
    cout << "O perimetro do retangulo eh: " << perimetro << endl;
    
    return 0;
}