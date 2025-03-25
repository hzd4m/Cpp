//Desenvolva uma função chamada media que receba um array de notas (do tipo float) e onúmero de notas e retorne a média das notas 
#include <iostream> 
using namespace std;

float media(float* arr, int tamanho){
    float m = 0;
    float soma = 0;

    for(int i = 0; i < tamanho ; i++){
        soma += arr[i];

    }
    m = soma / tamanho;
    return  m;
}

int main() {
    int tamanho;

    cout << "Digite o número de notas: ";
    cin >> tamanho;

    
    float* notas = new float[tamanho];

   
    for (int i = 0; i < tamanho; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    
    float resultado = media(notas, tamanho);

    cout << "A média das notas é: " << resultado << endl;

    
    delete[] notas;

    return 0;
}
 