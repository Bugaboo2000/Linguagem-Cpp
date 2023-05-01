#include <iostream>
using namespace std;
#define PRECO 1.99
/* Código retirado do artigo "Linguagens C++ - Notas de Aula" do autor professor Armando Luiz Delgado, disponível na página 6
*/
int main(){
int pera = 3;
char qualidade = 'A';
float peso = 2.5;

cout << "Existem" << pera << "peras de qualidade" << qualidade << "pesando" << peso << "quilos." << endl;
cout << "O preço por quilo é R$" << PRECO << ", o total é R$" << peso * PRECO << endl;




}
