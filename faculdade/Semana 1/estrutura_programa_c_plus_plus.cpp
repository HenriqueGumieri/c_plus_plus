#include <iostream>  /* Inclusão de arquivos com propósitos específicos (#include). Neste
caso está sendo incluída o arquivo iostream que contém classe de funções para manipulação
de entradas e saídas */

using namespace std;  // Definido o “espaço de nomes” padrão. Serve para definição de todas as funções da biblioteca padrão. Isto facilita a codificação.

int main()  /* Definida a função principal do programa. Obrigatória no mínimo uma função main,
pois é nessa função que são iniciados os processos definidos no programa. O tipo de dado de retorno é inteiro (int). */

{  // Inicio (abertura) do bloco de comandos.

    cout << "Hello world!" << endl;  /* cout: objeto da classe iostream que serve para enviar um pacote de dados para a saída padrão.
<<: operador de inserção para a colocação do conteúdo dado a sua direita no fluxo de saída.
" ": conjunto de dados que está sendo enviado para o fluxo de saída.
endl: notação que indica o fim da linha com salto para a linha seguinte. */

    return 0;  // função do tipo inteiro retornando o valor zero.

}  // Fim do bloco de comandos.

/* Linhas em branco servem apenas para deixar o programa mais legível. Não são processadas
pelo compilador. O ponto e vírgula colocado no final da linha é obrigatório. */

// Comentário em uma linha
/* Coméntário em
duas linhas */
