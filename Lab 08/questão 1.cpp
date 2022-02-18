#include <iostream>
using namespace std;

void soma(int a, int b);
void soma (int c, float d);
void soma(int e, int f, int g);

int main (){
	setlocale(LC_ALL, "portuguese");
    int a, b, c, e, f, g;
    float d;

    cout <<"Digite dois números inteiros" << endl;
    cin >> a >> b;
    soma(a, b);

    cout <<"Digite um número inteiro e um real" << endl;
    cin >> c >> d;
    soma(c, d);

    cout <<"Digite tres números inteiros" << endl;
    cin >> e >> f >> g;
    soma(e, f, g);

return 0;
}


void soma(int a, int b){
    int res;
    res = a + b;
    cout << "A soma de " << a << " + " << b << " = " << res << endl << endl;
}


void soma(int c, float d){
    float res;
    res = c + d;
    cout << "A soma de " << c << " + " << d << " = " << res << endl << endl;
}


void soma(int e, int f, int g){
    int res;
    res = e + f + g;
    cout << "A soma de "<< e << " + " << f << " + " << g << " = " << res << endl;
}

