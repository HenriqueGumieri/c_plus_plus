#include <iostream>

using namespace std;

int main()
{
    char cOp;
    do{
        float fPesBanPrat=0,fPesLarPer=0,fValBanPrat=0,fValLarPer=0,fDesNorBanPrat=0,fDesNorLarPer=0,fValTot=0,fDesNor=0,fDesAdc=0,fValLiq=0;
        cout << endl;
        cout << "Entre com a quantidade em kg de banana prata: ";
        cin >> fPesBanPrat;
        cout << "Entre com a quantidade em kg de laranja pera: ";
        cin >> fPesLarPer;
        if (fPesBanPrat <= 3){
            fValBanPrat = fPesBanPrat * 2.70;
        }else{
            fValBanPrat = fPesBanPrat * 2.50;
            fDesNorBanPrat = (fPesBanPrat * 2.70) - fValBanPrat;
        }
        if (fPesLarPer <= 3){
            fValLarPer = fPesLarPer * 3.10;
        }else{
            fValLarPer = fPesLarPer * 2.80;
            fDesNorLarPer = (fPesLarPer * 3.10) - fValLarPer;
        }
        if(fPesBanPrat + fPesLarPer > 7 || fValBanPrat + fValLarPer > 18){
            fDesAdc = (fValBanPrat + fValLarPer) * 0.1;
            fValLiq = fValBanPrat + fValLarPer - fDesAdc;
        }else{
            fValLiq = fValBanPrat + fValLarPer;
        }
        fDesNor = fDesNorBanPrat + fDesNorLarPer;
        fValTot = fValBanPrat + fValLarPer;
        cout << "\nTotal da compra = " << fValTot << endl;
        cout << "Desconto normal = " << fDesNor << endl;
        cout << "Desconto adicional = " << fDesAdc << endl;
        cout << "Valor liquido = " << fValLiq << endl;
        cout << "\nDeseja realizar mais uma compra(Se sim, digite 'S')? ";
        cin >> cOp;
        cin.ignore();
    }while(cOp == 's' || cOp == 'S');
    return 0;
}
