#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

string operacao;
float n1, n2;

int main(){
    cout << "Escolha uma operação (+ , - , * , /):  ";
    cin >> operacao;
    cout << "Digite um números: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;

    if (operacao == "+"){
        cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
    } else if(operacao == "-"){
        cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
    } else if (operacao == "*"){
        cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n"; 
    } else if(operacao == "/"){
        cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
    } else{
        cout << "Opção inválida, tente novamente!";
    }
    return 0;
}