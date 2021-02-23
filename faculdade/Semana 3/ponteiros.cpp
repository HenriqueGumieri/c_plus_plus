#include <iostream>

using namespace std;

int main()
{
    int *ipNum;  // defini��o de um ponteiro do tipo inteiro
    int iQuant; // defini��o de uma vari�vel do tipo inteiro
    iQuant = 123;  // a vari�vel recebe um valor inteiro
    ipNum = &iQuant; // inicializa��o do ponteiro da vari�vel
    cout << "Quantidade = " << iQuant << endl;
    cout << "Local de armazenamento da quantidade: " << ipNum << endl;
    cout << "Conteudo armazenado em " << ipNum << " = " << *ipNum << endl;
    iQuant = 2*iQuant;  // modifica��o do valor da vari�vel
    ipNum = &iQuant;  // nova inicializa��o do ponteiro da vari�vel
    cout << "Quantidade = " << iQuant << endl;
    cout << "Conteudo armazenado em " << ipNum << " = " << *ipNum << endl;
    return 0;
}
