//Escreva uma função inverteString em C++ que recebe uma string como parâmetro e a inverte sem usar funções da biblioteca padrão. 

#include <iostream> 

using namespace std;

void inverteString(char str[]){
    int inicio = 0;
    int fim = 0;

    while(str[fim] != '\0'){
        fim++;
    }

    fim--;


    while(inicio < fim){
        char temp = str[inicio]; 
        str[inicio] = str[fim];
        str[fim] = temp; 

        inicio++;
        fim--;

    }
}

    int main() {
        char texto[] = "Amor";
    
        cout << "Original: " << texto << endl;
    
        inverteString(texto);
    
        cout << "Invertida: " << texto << endl;
    
        return 0;
    }




 