#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int levantamento;
	float qteclados, v[5]={0};
	cout << "Digite a situação do teclado atual:" <<endl;
	cout << "1 - Necessita da substituição de teclas; \n2 - Necessita de limpeza;\n3 - necessita troca do cabo ou conector; \n4 - quebrado ou inutilizado \n5 - funcionando normalmente"<<endl;
	
	while (levantamento !=0){
	cin >> levantamento;	
		switch (levantamento){
			case 1:
				v[1]++;
				break;
			
			case 2: 
				v[2]++;
				break;
			
			case 3:
				v[3]++;
				break;
			
			case 4:				
				v[4]++;
				break;
			
			case 5:	
				v[5]++;
				break;
			
			default:
				cout <<"Fim da execução"<<endl;
				break;

		}
		qteclados++;
	}

	qteclados = qteclados-1;
	cout << "Quantidade de teclados"<< " : "<< qteclados<<endl;
	cout << "\tSituação			          Quantidade   	   Percentual"<<endl;
	cout << "1 - Requer troca de teclas: \t\t\t\t"<< v[1] <<"\t\t"<< v[1]/qteclados*100<<" %" << endl;
	cout << "2 - Requer limpeza: \t\t\t\t\t"<< v[2] <<"\t\t"<< v[2]/qteclados*100 <<" %" << endl;
	cout << "3 - Requer troca de cabo/conector: \t\t\t"<< v[3] <<"\t\t"<< v[3]/qteclados*100 <<" %" << endl;
	cout << "4 - quebrado ou inutilizado: \t\t\t\t"<< v[4] <<"\t\t"<< v[4]/qteclados*100 <<" %" << endl;
	cout << "5 - Funcionando perfeitamente: \t\t\t\t"<< v[5] <<"\t\t"<< v[5]/qteclados*100 <<" %" << endl;
	
return 0; 	
}



