#include <iostream> 

using namespace std;

void imprimeArray(int* arr, int tamanho){
    for(int i = 0 ; i <  tamanho ; i++){
        cout << arr[i] << " " << endl;
    }

    
}


int main(){
    int tamanho;

    cout << "Digite o tamanho da array: " << endl;
    cin >> tamanho;

    int* array = new int[tamanho];

    cout << "Digite os " << tamanho << " elementos da array: " << endl;
    
    for(int i = 0 ; i < tamanho ; i++){
        cin >> array[i];
    }
    
   cout << "Os elementos da array são: ";
    imprimeArray(array, tamanho);

    delete[] array; 
    return 0;

}