// Crie uma função em C++ chamada somaElementos que recebe um array de inteiros e seu tamanho, e retorna a soma de todos os elementos do array
 

#include <iostream> 

using namespace std;

int somaElementos(int* arr, int tamanho){
    int soma = 0; 
    for(int i = 0 ; i < tamanho ; i++){
        soma += arr[i];
    }

    return soma;
}

int main(){
    int tamanho;

    cout << "Digite o tamanho da sua array: " << endl;
    cin >> tamanho;


    int* array = new int[tamanho];

    cout << "Agora, digite os " << tamanho << " elementos da sua array." << endl;
    for(int i = 0 ; i < tamanho ; i++){
        cin >> array[i];
    }

    int resultado = somaElementos(array,tamanho);

    cout << "O somatório dos elementos de sua array é: " << resultado << endl;

}