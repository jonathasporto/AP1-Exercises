#include <iostream>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
int vetorA[100];
int vetorB[100];
	for (int i =0;i<100;i++){
        vetorA[i] = i;
        vetorB[i] = vetorA[i] * 2;
        cout << "Vetor A = " << vetorA[i] << " \tVetor B = " << vetorB[i] << endl;
    }
return 0;
}
