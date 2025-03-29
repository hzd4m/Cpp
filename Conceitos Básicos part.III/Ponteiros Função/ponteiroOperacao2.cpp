#include <iostream>
using namespace std;


int soma(int a, int b) {
    return a + b;
}

int subtrai(int a, int b) {
    return a - b;
}

int multiplica(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Erro: divisao por zero!" << endl;
        return 0;
    }
    return a / b;
}

int operacao(int a, int b , int(*f)(int,int)){
    return f(a,b);
}

int main() {
    int x = 10, y = 5;

    cout << "Soma: " << operacao(x, y, soma) << endl;
    cout << "Subtracao: " << operacao(x, y, subtrai) << endl;
    cout << "Multiplicacao: " << operacao(x, y, multiplica) << endl;
    cout << "Divisao: " << operacao(x, y, divide) << endl;

    return 0;
}