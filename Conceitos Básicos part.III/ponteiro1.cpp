//Crie uma função em C++ que receba um ponteiro para um array de inteiros e o tamanho do array, e então imprima todos os elementos do array. 
#include <iostream>
using namespace std;


void imprime(int* arr, int tamanho){
    for(int i = 0 ; i < tamanho ; i++){
        cout << arr[i] << " " << endl;
    }

    
}

int main(){
    int tamanho;

    cout << "Digite o tamanho da array" << endl;
    cin >> tamanho;

    int* array = new int[tamanho];

    cout << "Digite os " << tamanho << " da sua array" << endl;
    
    for(int i = 0 ; i < tamanho ; i++){
        cin >> array[i];
    }

    cout << "Os elementos da sua array são: " << endl;
    imprime(array, tamanho); 

    delete[] array; 

    return 0;
}