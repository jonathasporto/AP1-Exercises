#include <iostream>
using namespace std;

int potencia(int, int);
int main(){
	int i,j;
	cout << "Digite a base da potencia: " << endl;
	cin >> i ;
	cout<<"Digite o expoente da potencia: " << endl;
	cin>> j;
	potencia (i,j);
	cout<<potencia(i,j);
return 0;	
}

int potencia(int i , int j){
	
		if (j == 0){
		return 1;	
		}
		
		else{
			return i * (potencia (i,j-1)); 
			
		}

}
