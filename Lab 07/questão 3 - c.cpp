#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int troca(int, int, int);
int ordena(int, int, int);
int genFromRand(int,int);

int main(){
int n, m, p;
  srand((unsigned)time(NULL));
      n = genFromRand(100, 200); 
      m = genFromRand(100, 200);
      p = genFromRand(100, 200);

  ordena(n, m, p);

  return 0;
}

int ordena(int a, int b, int c){

    return troca(a, b, c);
}

int troca(int num1, int num2, int num3) {
    int temp;
    // Maior 1 e 2
    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
	// Maior entre 1 e 3
    if(num3 > num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
	//Maior entre 2 e 3
    if(num3 > num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    cout << num3 << " " <<  num2 << " " << num1;
    return num3, num2, num1;
}

int genFromRand(int start, int end) {
    return (rand() % (end-start)) + (start+1);
}
