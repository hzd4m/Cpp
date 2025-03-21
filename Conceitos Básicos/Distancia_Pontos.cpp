#include <iostream> 
#include <cmath>

using namespace std; 

class PontoC {
    public:
    int x;
    int y;
};

int main(){

    
    int raiz;
    int distancia;

    PontoC p1;
    PontoC p2; 

    cout << "Digite as coordenadas do ponto 1 (x,y) : " << endl;
    cin >> p1.x;
    cin >> p1.y; 
    
    cout << "Digite as coordenadas do ponto 2 (x,y) : " << endl; 
    cin >> p2.x;
    cin >> p2.y; 

    distancia = ((p2.x - p1.x) * (p2.x - p1.x) ) + ((p2.y - p1.y) * (p2.y - p1.y));
    raiz = sqrt(distancia); 

    cout << "A distância entre os pontos é: " << distancia << endl;

    return 0;


}