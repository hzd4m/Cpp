#include <iostream> 

using namespace std;

int main() {
    int x;
    int y;
    int z;

    int soma;
    int sub;
    int mult;
    int div;


    cout << "Digite a variável X: " << endl;
    cin >> x ; 

    cout << "Digite a variável Y: " << endl;
    cin >> y ; 

    cout << "Digite a variável Z: " << endl;
    cin >> z ; 

    soma = x + y + z ;
    sub =  x - y - z;
    mult = x * y * z;
    div = x + y + z / 3; 

    cout << "SOMA: " << soma << endl; 
    cout << "SUBTRAÇÃO: " << sub << endl;
    cout << "MULTIPLICAÇÃO: " << mult << endl;
    cout << "DIVISÃO: " << div << endl;
}