#include <iostream>
using namespace std;
int fatorial (int);
float fat_reverso(int);

int main(){
	int num;
	int fat;
	cout<<"Digite um numero"<<endl;
	cin>> num;
	fat_reverso(num);
return 0;	
}

int fatorial(int num){
int fat;
	for(fat = 1; num >= 1; num--){
    	fat= fat*num;
    	cout<<num;
   			if(fat != 1){	
				cout<<" * ";
			}	
  	}
  	cout<<" = "<< fat;
}

float fat_reverso (int num){
float s=1;
	for(int i=1;i<=num;i++){
		s= 1 + (1/fatorial(i));
		
	}
	cout << s << endl;

}
