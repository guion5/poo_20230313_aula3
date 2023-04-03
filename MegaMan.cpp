//incluir bibliotecas
#include <iostream>
#include <string>
using namespace std;

//abertura do codigo
int main() {
    //declaração de variáveis "vida"
    int life;
    //declaração de variáveis "energia"
    float energy;
    //declaração de variáveis "status"
    bool status;
    //declaração de variáveis "personagem"
    string character;
    
    //valor da variável "vida"
    life = 5;
    //valor da variável "energia"
    energy = 99.99f;
    //nome da variável "status"
    status = true;
    //nome da variável "personagem"
    character = "Mega Man";
    
    //interface do usuario com o resultado da variável "vida"
    cout<<life<<endl;
    //interface do usuario com o resultado da variável "energia"
    cout<<energy<<endl;
    //interface do usuario com o resultado da variável "status"
    cout<<status<<endl;
    //interface do usuario com o resultado da variável "personagem"
    cout<< character<<endl;
    
    //retornar ao inicio
    return 0;
}