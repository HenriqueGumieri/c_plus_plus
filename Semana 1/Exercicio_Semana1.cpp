#include <iostream>

using namespace std;

int main()
{
    int A,B;
    float C;
    cout << "Entre com um valor inteiro para A: ";
    cin >> A;
    cout << "Entre com um valor inteiro para B: ";
    cin >> B;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    bool flag = A < B;
    if(flag){
        C = A * B;
        cout << "Produto de A por B = " << C << " , em que " << C << " eh o valor de C." << endl;
    } else {
        if(A == B){
            C = A * A;
            cout << "Quadrado de A = " << C << ", em que " << C << " eh o valor de C." << endl;
        } else {
            C = (float)A / B;
            cout << "A dividido por B = " << C << ", em que " << C << " eh o valor de C." << endl;
        }
    }
    return 0;
}
