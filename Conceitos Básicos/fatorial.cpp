//Importante entender que usaremos (long long) no tipo de dado da variável "fatorial" porque (int) suporta até 2.147.483.647
//Quando utilizamos o "unsigned" nós não permitiremos número negativos e , ao mesmo tempo , dobraremos a faixa de números possíveis.
//Na construção desse desafio nós cometemos alguns erros como não atribuir o valor 1 ao long long fatorial , gerando aleatoriedade no resultado final.
//No loop nós inicializados com 0 , resultando em zero em todas as fatoriais.
#include <iostream>

using namespace std;

int main(){
    unsigned long long fatorial = 1 ;
    int n;


    cout << "Digite um número inteiro para calcularmos o fatorial: " << endl;
    cin >> n;

    if(n < 0){
        cout << "Não temos fatorial com número negativo." << endl;
    }else{
        for(int i = 1 ; i <= n ; i++){
            fatorial *= i;

        }

        cout << "O fatorial de " << n << " é: " << fatorial << endl;
    }

    return 0;
}
