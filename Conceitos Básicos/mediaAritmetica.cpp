#include <iostream> 

using namespace std;


int main (){
    int x;
    int y;
    int z;
    int media;

    cout << "Vamos calcular a média dos números" << endl;
    cout << "Digite o primeiro número : " << endl;
    cin >> x;
    cout << "Digite o segundo número : " << endl;
    cin >> y; 
    cout << "Digite o terceiro número : " << endl;
    cin >> z;  


    media = (x + y + z)/3;

    cout << "A média aritmética dos números é: " << media << endl;
}