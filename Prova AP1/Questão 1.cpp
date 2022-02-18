#include<iostream>
using namespace std;

int controla(int n);
int imprimelinha(int j);

int main(){
 int n;
	cout<<"Digite um numero"<<" ";
	cin>>n;
	controla(n);
 return 0;
}

int controla(int n){
	for(int i=1;i<=n;i++){
    	imprimelinha(i);
    	cout << endl;		
	}
}

int imprimelinha(int n){
	for(int i=1;i<=n;i++){
		cout<<i;
		cout<<" ";
	}
}


	






