#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
		
	int vetor[50];
	int n;
	
	cout << "Digite um valor de N:" << endl;
	cin>>n;
	cout << "Digite os valores: "<<endl;
	
	for (int i=0;i<n;i++){
		cin>>vetor[i];
	}

	for (int i=0;i<n;i++){	
		for(int j=1; j<=vetor[i]; j++)
			cout<< "*";
			cout <<endl;
	}
	
	return 0;
}
