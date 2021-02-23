#include <iostream>

using namespace std;

int somatoria(int iX);

int main()
{
    int iS,iN;
    cout << "Entre com o valor de N: ";
    cin >> iN;
    iS = somatoria(iN);
    cout << "Valor de S = " << iS << endl;
    return 0;
}
int somatoria(int iX){
    if(iX > 1)
        return iX + somatoria(iX - 1);  // função chamando a si própria
    return iX;
}
