#include <iostream>
using namespace std;
int funcaoperfeito (int);

int main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> n;
    	if(funcaoperfeito(n) == 1){
       		cout << endl << n << " \n� perfeito.";
    	}
    	else{
          cout << endl << n << " \nN�o � perfeito.";
    	}
			
return 0;
}


int funcaoperfeito(int n){
    int soma = 0;
    
    for (int i=1; i<=n/2; i++){
        if(n % i == 0 ){
            soma = soma + i;
            cout << i << " + "; 		   
		}
    }
		
    if (soma == n)
        return 1;
    else
        return 2;
}
