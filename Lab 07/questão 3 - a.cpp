#include <iostream>
using namespace std;

int troca (int, int);

int main(){ 
int num1, num2;
  cout << "Digite 2 numeros: " << endl;
  cin >> num1 >> num2;
  troca(num1, num2);
  return 0;
}

int troca(int a, int b) {
  int c, d;
  c = a;
  d = b;
  a = d;
  b = c;
  
  cout << "o valor de A e: " << a << endl;
  cout << "o valor de B e: " << b;

  return a, b;
}

