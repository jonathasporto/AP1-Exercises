#include <iostream>
#include <iomanip>
using namespace std;

int main(){
setlocale(LC_ALL,"portuguese");
	int linha = 4;
	int coluna = 3;
	int aluno[linha];
	int notas[linha][coluna];
	cout << "Digite a nota dos alunos nas três unidades "<<endl;
	
	for (int i=0; i<linha; i++){
		cin >> aluno[i];	
		for(int j=0;j<coluna; j++){
			cin>> notas[i][j];
		}		
	}
	
	cout<< setw(5)<<" Aluno"<<setw(13) << "  Notas" << endl;
	cout<< "--------------------------";
	for(int i=0; i<linha; i++){
        cout<<endl<<setw(4)<<aluno[i]<<"   | ";
			for(int j=0; j<coluna; j++){
            cout<<" "<<setw(4)<<notas[i][j];
        	}
        cout <<endl <<"--------------------------";
	}
		
return 0; 	
}
