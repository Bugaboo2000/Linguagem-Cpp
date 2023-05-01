// página 13 exemplo 2

#include <iostream>
#include <iomanip>
	using namespace std;
	int main() {
	int n1, n2, n3;
	int soma;
cout << "Entre com 3 numeros inteiros: ";
cin >> n1 >> n2 >> n3;
	soma = n1 + n2 + n3;
	cout << "soma =" << soma << endl;
	cout.setf(ios::fixed | ios::showpoint );
// mas que porra é essa?
cout.precision(2);
cout << "Media = " << setw(8) << soma / 3.0 << endl;
cout << "Produto = " << (unsigned) n1 * n2 * n3 << endl;

}
