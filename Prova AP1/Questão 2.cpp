#include <iostream>
using namespace std;

void notacao (int horainicial, int minutos);

int main(){
int horainicial, minutos;
	cout << "Digite a hora e os minutos a serem convertidos: "<< endl;
	cin >> horainicial>> minutos;
	notacao(horainicial,minutos);
		
return 0;	
}

void notacao (int horainicial, int minutos){
	
	if ((horainicial >= 0) && (horainicial <=12 )){							// Hora A.M
		cout << horainicial <<":" << minutos <<" A.M." << endl;	
	}
	
	if ((horainicial > 12) && (horainicial <= 23 )){						// Hora P.M
			horainicial -= 12;
		cout << horainicial <<":" << minutos <<" P.M." << endl;
	}	
}
