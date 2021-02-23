#include <iostream>

using namespace std;

float soma(float &fX, float &fY);

int main()
{
    float fA,fB,fC;
    cout << "Entre com o valor de A: ";
    cin >> fA;
    cout << "Entre com o valor de B: ";
    cin >> fB;
    fC = soma(fA,fB);
    cout << "A + B = " << fC << endl;
    cout << "A = " << fA << endl;
    return 0;
}

float soma(float &fX, float &fY){
    fX = fX + fY;
    return fX;
}
