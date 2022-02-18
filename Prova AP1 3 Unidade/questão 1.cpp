#include <iostream>
using namespace std;

int seq(int);

int main() {
    int n;

    cout << "Digite o valor de n: ";
    cin >> n;

    cout << seq(n) << endl;

    return 0;
}

int seq(int n) {
    if(n == 0 || n == 1 || n == 2) {
        return 1;
    }
    return seq(n - 2) + seq(n - 3);
}
