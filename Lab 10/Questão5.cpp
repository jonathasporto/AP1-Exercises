#include <iostream>
using namespace std;

void calculaArea(float );
void calculaArea(float , float );
void calculaArea(float , float , float );

int main (){
	int selecao, l,B,b,h;
	setlocale(LC_ALL,"portuguese");
	cout << "Selecione o poligono para se calcular a �rea: \n1 - Quadrado \n2 - Ret�ngulo  \n3 - Trap�zio  "<<endl;
	cin >> selecao;
		switch (selecao){
		
			case 1:
				calculaArea(l);
				break;
	
			case 2 :
				calculaArea(b,h);
				break;
				
			case 3 :
				calculaArea(B,b,h);
				break;
				
		}
	return 0;
}


void calculaArea(float l){
float area,lado;
	cout<< "Digite o tamanho do lado do quadrado: " << endl;
	cin>> lado;
	area = lado * lado;
	cout << "A �rea do quadrado �: "<< area << endl;	
}


void calculaArea(float b, float h){
float area, base, altura;	
	cout<< "Digite o tamanho da base e altura do ret�ngulo: " << endl;
	cin>> base>>altura;
	area = base * altura;
	cout << "A �rea do quadrado �: "<< area<< endl;
}


void calculaArea(float B, float b, float h){
float area, basemaior, basemenor, altura;
	cout<< "Digite o tamanho da base maior, base menor e altura do trap�zio: " << endl;
	cin>> basemaior>>basemenor>>altura;
	area =(basemaior * basemenor * altura)/2;
	cout << "A �rea do quadrado �: "<< area << endl;
}
