#include<iostream>

using namespace std;

int main() {
	int n;
	int contador = 2;
	int r = 1;
	cout << "Digite um núemro: " << endl;
	cin >> n;
	n -= 3;
	cout << "Resultado: ";
	for (int i = 0; i <= n; i++) {
		if (r == 1) {
			cout << r << "|";
			r += contador + 1;
		}
		if (r == 4) {
			cout << r << "|";
			contador += 3;
			r += contador;
			cout << r << "|";
		}
		else {
			contador += 2;
			r += contador;
			cout << r << "|";
		}
		
	}
	return 0;
}