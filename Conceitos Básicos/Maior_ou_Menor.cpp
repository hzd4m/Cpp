#include <iostream> 

using namespace std;
 
int main(){
    int x;
    int y;

    cout << "Digite o valor de X : " << endl;
    cin >> x; 

    cout << "Digite o valor de y: " << endl;
    cin >> y;


    if(x > y){
        cout << "O número " << x << " é maior que " << y;
    }else if ( x < y) { 
        cout << "O número " << x << " NÃO é maior que " << y;
    }else{
        cout << "Os números possuem o mesmo valor";
    }

    return 0;
}