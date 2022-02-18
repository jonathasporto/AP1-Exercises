#include <iostream>
using namespace std;

int mdc (int,int);

int main (){
	int num1,num2;
	cout<<"Digite dois numeros para encontrar o M.D.C. (máximo divisor comum) entre eles: "<<endl;
	cin >> num1 >> num2;
	mdc(num1,num2);
	cout<<mdc(num1,num2); 	
return 0; 	
}

int mdc(int num1, int num2){
	if(num2 == 0 ){
		return num1;	
	}
	else{
		return mdc(num2, num1%num2);
	}
}
