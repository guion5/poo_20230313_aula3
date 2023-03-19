// inserir biblioteca
#include <iostream>
// inserir biblioteca de matemática
#include <cmath>
using namespace std;
// abertura do código
int main() {
  //declarar de variáveis da formula de bhaskara
  float a, b, c, x1, x2, delta;
  // interface do usuario - inserir coeficiente "a"
  cout << "digite o valor de a: ";
  // variavel onde entra o valor digitado pelo usuario
  cin >> a;
  // interface do usuario - inserir coeficiente "b"
  cout << "digite o valor de b: ";
  // variavel onde entra o valor digitado pelo usuario
  cin >> b;
  // interface do usuario - inserir coeficiente "c"
  cout << "digite o valor de c: ";
  // variavel onde entra o valor digitado pelo usuario
  cin >> c;
  //calculo do delta
  delta = pow(b, 2) - 4 * a * c;
  //condicional - se valor do delta for maior ou igual a zero
  if (delta >= 0) {
      //calculo do x positivo
      x1 = (-b + sqrt(delta)) / (2 * a);
      //calculo do x negativo
      x2 = (-b - sqrt(delta)) / (2 * a);
      // interface do usuario - resultado
      cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
  }
  //condicional - se valor do delta for menor que zero
  else {
      // interface do usuario - resultado
      cout << "A equacao nao tem raizes reais." << endl;
    }
    return 0;
}