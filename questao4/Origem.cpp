#include<iostream>

using namespace std;

int main() {
	int n;
	int contador = 3;
	int r = 1;
	cout << "Digite um núemro: " << endl;
	cin >> n;
	cout << "Resultado: ";
	if (n == 0) {
		cout << "Digite um numero maior que zero";
	}
	else {
		cout << r << "|";
		r += 3;
	}
	if (n > 1) {
		n -= 1;
		for (int i = 0; i < n; i++) {		
				cout << r << "|";
				contador += 2;
				r += contador;
		}
	}	
	return 0;
}