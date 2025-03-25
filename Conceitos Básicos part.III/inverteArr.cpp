//Implemente uma função em C++ que, dado um array de inteiros, investa a ordem de seus elementos.
 
#include <iostream>

using namespace std;


void inverte(int arr[] , int tamanho){
    int inicio = 0;
    int fim = tamanho - 1;

    while(inicio < fim){
        int temp = arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = temp;
          inicio++;
          fim--;
    }

  

} 
void imprimeArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    cout << "Array original: ";
    imprimeArray(arr, tamanho);

    inverte(arr, tamanho);

    cout << "Array invertido: ";
    imprimeArray(arr, tamanho);

    return 0;
}


