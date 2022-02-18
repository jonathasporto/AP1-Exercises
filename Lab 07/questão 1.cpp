#include <iostream>
using namespace std;

int funcaoprimo(int );

int main(){

int num1; 
 cout<<"Digite um numero"<<endl;
 cin>>num1;
 cout<<"O valor retornado eh "<<funcaoprimo(num1)<<endl;

    return 0;
}

int funcaoprimo(int x ){
    int i,numeronaoprimo=1;

    for (i = 2; i <= x/2 ; i++){
        if (x % i == 0){
            numeronaoprimo=0;
            break;
        }
    }

    return numeronaoprimo;
}
