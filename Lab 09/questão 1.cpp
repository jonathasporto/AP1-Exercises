#include <iostream>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
	
int vetor[50];
int n;

cout << "Digite um valor de N:" << endl;
cin>>n;
cout << "Digite os valores de X: "<<endl;

for (int i =1;i<=n;i++){
	cin>>vetor[i];
	
}
cout << "Os valores digitados s?o: "<< endl;
	for (int i=1;i<=n;i++){
		cout << vetor [i]<<endl;
		
	}
	
	
return 0;
}
