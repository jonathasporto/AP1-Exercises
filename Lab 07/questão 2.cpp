#include <iostream>
using namespace std;  

int funcaoprimo(int num);  

int main (){ 

int num = 700, numprimo;
    while(num <= 1100){
	    for (int i = 3; i < num; i += 2 ){
			if(funcaoprimo(i) == 0){
				numprimo = num - i;                 
				if(funcaoprimo(numprimo) == 0){
					cout<< i << " + " << numprimo << " = " << num << endl; 
				break;   
				}
			}         
		}         
		num += 2;
	} 
	return 0;
} 	 


int funcaoprimo(int num){
int naoprimo = 0 ;
     for(int i = 2; i <= num / 2; i++){
	    if(num%i == 0){
			naoprimo++;             
		break;     
		}  
	} 
return naoprimo;
}
