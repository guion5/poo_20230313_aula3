// inserir biblioteca
#include <iostream>
using namespace std;
//abertura do codigo
int main(){
    // declarar variaveis  
    float raio, area;
    // declarar valor fixo para o calculo
    const float PI = 3.14159;
    // interface do usuario - inserir valor do raio
    cout << "Digite o raio do círculo: ";
    // variavel que vai entrar o valor digitado pelo usuario
    cin >> raio;
    // calculo da area
    area = PI * raio * raio;
    // interface do usuario - resultado
    cout << "A área do círculo eh: " << area << endl;
    
    return 0;
}