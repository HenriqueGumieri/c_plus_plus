#include <iostream>  /* Inclus�o de arquivos com prop�sitos espec�ficos (#include). Neste
caso est� sendo inclu�da o arquivo iostream que cont�m classe de fun��es para manipula��o
de entradas e sa�das */

using namespace std;  // Definido o �espa�o de nomes� padr�o. Serve para defini��o de todas as fun��es da biblioteca padr�o. Isto facilita a codifica��o.

int main()  /* Definida a fun��o principal do programa. Obrigat�ria no m�nimo uma fun��o main,
pois � nessa fun��o que s�o iniciados os processos definidos no programa. O tipo de dado de retorno � inteiro (int). */

{  // Inicio (abertura) do bloco de comandos.

    cout << "Hello world!" << endl;  /* cout: objeto da classe iostream que serve para enviar um pacote de dados para a sa�da padr�o.
<<: operador de inser��o para a coloca��o do conte�do dado a sua direita no fluxo de sa�da.
" ": conjunto de dados que est� sendo enviado para o fluxo de sa�da.
endl: nota��o que indica o fim da linha com salto para a linha seguinte. */

    return 0;  // fun��o do tipo inteiro retornando o valor zero.

}  // Fim do bloco de comandos.

/* Linhas em branco servem apenas para deixar o programa mais leg�vel. N�o s�o processadas
pelo compilador. O ponto e v�rgula colocado no final da linha � obrigat�rio. */

// Coment�rio em uma linha
/* Com�nt�rio em
duas linhas */
