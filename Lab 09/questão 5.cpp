#include <iostream>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
	
int vetor[20];
int cont;
cout << "Digite os valores de X: "<<endl;

	for (int i =0;i<20;i++){
		cin>>vetor[i];
			if (vetor[i] % 2  != 0){
				cont=1;
			}
	}
	
	if (cont == 1){
		cout << "Falso"<<endl;
	}
	else{
		cout << "Verdadeiro"<<endl;
	}

return 0;
}
