//incluir biblioteca
#include <iostream>
using namespace std;

//abertura de código
int main() {
    //declaração de variáveis
    char op;
    float num1, num2;
    //interface do usuário para inserir o operador 
    cout << "Entre com o operador: +, -, *, /: ";
    //variável que recebe o operador digitado pelo usuário	
    cin >> op;
    //interface do usuário para inserção de valores 
    cout << "Entre com dois valores: ";
    //variáveis que recebem os valores inseridos pelo usuário
    cin >> num1 >> num2;
    
    //condicional aplicado à variável escolhida pelo usuário
    switch(op) {
        //se o usuário insere o operador "+" 
        case '+':
        //interface do usuário com o calculo solicitado
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        //finalizar operação
        break;
        //se o usuário insere o operador "-" 
        case '-':
        //interface do usuário com o calculo solicitado
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        //finalizar operação
        break;
        //se o usuário insere o operador "*" 
        case '*':
        //interface do usuário com o calculo solicitado
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        //finalizar operação
        break;
        //se o usuário insere o operador "/" 
        case '/':
        //interface do usuário com o calculo solicitado
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        //finalizar operação
        break;
        //resposta padrão quando o usuário insere algo diferente de um operador matemático 
        default:
        //interface do usuário com a mensagem de erro 
        cout << "Operador errado, por favor insira o operador correto";
        //finalizar operação
        break;
    
    }
    //retornar ao início
    return 0;
}