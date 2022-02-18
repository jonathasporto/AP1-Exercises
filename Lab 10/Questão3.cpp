#include <iostream>
using namespace std;

void troca (int&a ,int& b);
void trocaSeMenor(int& x,int& y ,int& z );

int main (){
setlocale(LC_ALL,"portuguese");
int x,y,z;

	cout << "Digite três numeros: "<< endl;
	cin>> x >> y >> z;
	trocaSeMenor(x,y,z);
return 0;	
}

void troca (int& a, int& b){
	int x,y,z;
	x=a;
	y=b;
	a=y;
	b=x;
}

void trocaSeMenor(int& x, int& y, int& z){
	if(x<y){
		troca(x,y);
	}
	if(x<z){
		troca (x,z);
	}
	if (y<z){
		troca(y,z);
	}
	
	cout<< "x = " << x << endl;
	cout<< "y = " << y << endl;
	cout<< "z = " << z << endl;
}
