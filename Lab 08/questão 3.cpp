#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int gera (int n = 0){

int gerar;
	if (n == 0){
   		for(int i = 0; i < 15; i++){ 
        	gerar = rand() % 15;
    	}
	} 
	else {
    	gerar = rand() % n;
    }
    return gerar;
}

int preenche (int matriz[10][20]){
int i,j;
    for (i = 0; i < 10; ++i){
        for (j = 0; j < 20; ++j){
            if(i % 2 == 0){
                matriz[i][j] = gera();
            }
            else{
                matriz[i][j] = gera(i);
            }
        }
    }
    for (i = 0; i < 10; ++i){
        for (j = 0; j < 20; ++j){
            cout << matriz[i][j] << " ";
        }
    cout << "\n";
    }

 return 0;
}

int main (){
    int matriz[10][20];
    	srand(time(NULL));
    	preenche(matriz);
 return 0;
}
