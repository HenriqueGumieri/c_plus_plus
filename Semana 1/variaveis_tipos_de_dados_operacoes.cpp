#include <iostream>
#define pi 3.14159 //diretiva: definir uma constante sem alocar espaço de memória

using namespace std;

int main()
{
    int quant = 10;
    float valor = 2.54;
    float total = quant * valor;
    cout << "Total = " << total << endl;

    float perimetro1 = 2 * pi * valor; //relaciona-se com a diretiva, substitui o valor
    cout << "Perimetro = " << perimetro1 << endl;

    const float PI = 3.14159; //não precisa de diretiva, aloca espaço de memória na constante "PI"
    float perimetro2 = 2 * PI * valor;
    cout << "Perimetro = " << perimetro2 << endl;

    return 0;
}

//Uma constante não pode ter seu valor modificado. Multiplicação, divisão, etc.
