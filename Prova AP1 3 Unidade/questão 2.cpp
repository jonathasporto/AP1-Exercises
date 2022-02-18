#include <iostream>
using namespace std;

int custo(int[6][6], int, int);
int percurso(int[6][6], int);

int main() {
    int i, j, matriz[6][6] = {{0, 1, 5, 8, 5, 7}, {2, 0, 3, 9, 4, 2}, {7, 4, 0, 8, 3, 6},
    {2, 4, 2, 0, 10, 7}, {3, 8, 23, 12, 0, 8}, {5, 15, 1, 6, 5, 0}};

    cout << "Informe a cidade origem: ";
    cin >> i;
    cout << percurso(matriz, i);

    return 0;
}

int custo(int matriz[6][6], int i, int j) {
    return matriz[i][j];
}

int percurso(int matriz[6][6], int i) {
    int temp=0;
    for(int a = i; a < 6; a++) {
        temp += custo(matriz, a, a + 1);
    }
    temp += custo(matriz, 5, 0);
    for(int a = 0; a < i; a++) {
        temp += custo(matriz, a, a + 1);
    }
    return temp;
}



//Boas festas, Feliz ano novo :smile:
