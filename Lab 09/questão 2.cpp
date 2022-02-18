#include <iostream>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
	
int vetor[50];
int n;

cout << "Digite um valor de N:" << endl;
cin>>n;
cout << "Digite os valores de X: "<<endl;

	for (int i =0;i<n;i++){
		cin>>vetor[i];
			if (vetor[i] % 2  == 0){
				vetor[i]=1;
			}
			else{
				vetor[i]=-1;
			}
}
	cout << "Os valores digitados são: "<< endl;
		for (int i=0;i<n;i++){
			cout << vetor [i]<<endl;	
		}
		
return 0;
}
