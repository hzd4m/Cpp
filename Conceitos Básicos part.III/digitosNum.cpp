// Faça uma função que receba um número inteiro e retorne quantos digitos este número contém. int num_digits(int number)
 
#include <iostream>

using namespace std;

int num_digits(int number){
    if(number == 0){
        return 1;
    }

    if(number < 0 ){
        number = - number;
    }

    int qtd = 0;

    while(number > 0){
        number /= 10;
        qtd++;
    }


    return qtd;
} 

int main(){
    int number;

    cout << "Digite o número: " << endl;
    cin >> number;

    int resultados = num_digits(number);

    cout << "A quantidade de dígitos do seu número é: " << resultados << endl;
}