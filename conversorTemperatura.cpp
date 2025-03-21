//Programa para converter temperatura de Celsius para Fahrenheit

#include <iostream>

using namespace std;

int converte (int c){
    int f;
    f = (9 * c + 32)/5; 

    cout << "Sua temperatura em Fahrenheit é " << f << endl;
    return 0;
} 


int main(){
    int c; 


    cout << "Digite o valor da temperatura em Celsius " << endl;
    cin >> c; 

    converte(c);



}