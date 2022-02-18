#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int matrix[4][4];
	int i, j, k;
    cout << "Digite um valor para a constante k : "<< endl;
    cin >> k;
    cout << "Digite os valores para a matriz 4 x 4\n"<<endl;
    for (i = 0; i < 4; i++){
        cout << "Linha : "<< i << endl;
        for (j = 0; j < 4; j++){
            cout << "Coluna : " << j << endl;
            cin >> matrix[i][j];
            if (i == j){
                matrix[i][j] = matrix[i][j] * k;
            }
        }
    cout << endl;
    }
    cout << "matriz 4x4 : \n";
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            cout << setw(4) << matrix[i][j];
        }
    cout << endl;
    }


return 0;
}
