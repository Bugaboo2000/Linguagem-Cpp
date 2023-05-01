// página 17, exemplo 2
#include <iostream>
using namespace std;
int main(){
int num1, num2, num3, aux;
	cout << "Entre com dois números inteiros: ";
	cin >> num1 >> num2;
if(num1 > num2) { aux = num1;
	num1 = num2;
	num2 = aux;
	cout << "Trocou \n";
}
cout << "Os numeros ordenados: " << num1 << " " << num2 << endl;
}
