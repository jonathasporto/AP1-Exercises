#include <iostream>
using namespace std;

int primo(int);
int divisor(int, int);

int main(){
    int n, d, temp;
    cout << "Digite um inteiro n: ";
    cin >> n;
    //cout << primo(n);
    //cout << divisor(n, d);
    for(int i = 1; i <= n; i++){
        temp = divisor(n, i);
        if(temp == true){
            cout << i << " ";
        }
    }
    
    return 0;
}

int primo(int a){ // 2
    for(int i=2; i <= a/2; i++){
        if(a % i == 0){
            return false;
        } else {
            return true;
        }
    }
}

int divisor(int a, int b) { // 1
    int temp;
    temp = primo(b);
    if(a % b == 0 && temp == true){
        return true;
    }  else {
        return false;
    }     
}
