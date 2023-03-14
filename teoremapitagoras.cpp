// inserir biblioteca
#include <iostream>
#include <cmath>
using namespace std;
//abertura do codigo
int main(){
    // declarar variaveis do teorema de pitagoras  
    float cateto_a, cateto_b, hipotenusa;
    // interface do usuario - inserir o cateto a do triangulo
    cout << "Digite o cateto a do triangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >>  cateto_a;
    // interface do usuario - inserir o cateto b do triangulo
    cout << "Digite o cateto b do triangulo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >>  cateto_b;
    // calculo da hipotenusa do triangulo retangulo
    hipotenusa = sqrt(pow(cateto_a, 2)+pow(cateto_b, 2));
    // interface do usuario - resultado
    cout << "A hipotenusa do triangulo retangulo eh: " << hipotenusa << endl;
    
    return 0;
}