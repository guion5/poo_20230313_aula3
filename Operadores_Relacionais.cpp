//incluir biblioteca 
#include <iostream>
using namespace std;

//abertura do codigo
int main() {
    //declaracao de variaveis (valores fixos)
    int x = 10;
    int y = 20;
    
    //condicional maior '>"
    if (x>y){
        //interface do usuario com o resultado
        cout << "x é maior que y" << endl;
    }
    //condicional menor '<"
    if (x<y){
        //interface do usuario com o resultado
        cout << "x é menor que y" << endl;
    }
    //condicional maior ou igual '>="
    if (x>=y){
        //interface do usuario com o resultado
        cout << "x é maior ou igual a y" << endl;
    }
    //condicional menor ou igual '<="
    if (x<=y){
        //interface do usuario com o resultado
        cout << "x é menor ou igual a y" << endl;
    }
    //condicional de igualdade '=="
    if (x==y){
        //interface do usuario com o resultado
        cout << "x é igual a y" << endl;
    }
    //condicional de diferença '!="
    if (x!=y){
        //interface do usuario com o resultado
        cout << "x é diferente de y" <<endl;
    }

    //voltar ao início
    return 0;
}