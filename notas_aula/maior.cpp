#include <iostream>
#include <unistd.h>
using namespace std;
// desafio de fazer um programa que pegue 3 números e imprima o número maior

int main() {
int num1, num2, num3;
	cin >> num1;
	cout << "Digite o número 1: " << endl;
		cin >> num2;
		cout << "Digite o número 2: " << endl;
	cin >> num3;
	cout << "Digite o número 3: " << endl;
	switch(main) {
	
		case num1>num2>num3:
	cout << num2;
	sleep(2);
	break;

	case num2>num1>num3:
	cout << num2;
	sleep(2);
	break;

	case num3>num1>num2;
	cout << num3;
	sleep(2);
	break;

}
}
