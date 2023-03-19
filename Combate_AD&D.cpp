// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    std::cout << "Combate Ad&d" << endl;
    
    int Thac0, bonus, CA, ataque;
    cout << "Digite a Thac0 do seu personagem: ";
    cin >> Thac0;
    cout << "Digite o bonus do seu personagem: ";
    cin >> bonus;
    cout << "Digite a CA do inimigo: ";
    cin >> CA;
    
    ataque = (Thac0 - (bonus)) - CA;
    
    if (ataque <= 20) {
    cout << "Você deve rolar: " << ataque << endl;
    cout << "ou mais no dado." << endl;
    }
    else {
    cout << "O MESTRE TÁ PICHURUCO?!? TÁ BIRULEIBE?!?!?" << endl;
    }
    return 0;
}