#include <iostream>

#include <iomanip>

#include <unistd.h>

using namespace std;
// // Manipuladores de fluxo
// int main(void)
// {
//     int i = 1234;
//     float f = 1234.5678;

//     cout << "|" << setw(10) << setfill('*') << hex << i << "|\n"
//          << "|" << setw(6) << setprecision(6) << f << "|" << endl;
// }

// // Conversões explícitas

// typedef int *ptr;

// int main(void)
// {
//     int i, j;
//     double d = 9.87;
//     int *k;

//     i = (int)d; // notação de cast
//     j = int(d); // notação funcional
//                 /*
//                     Notação funcional só pode ser usada com tipos simples (int, float, double, char, etc.) ou
//                     com tipos definidos pelo usuário que tenham construtores apropriados.
//                 */

//     k = ptr(&d); // notação funcional com ponteiros
// }

// Definições de variáveis

/*
    Uma variável poded ser declarada em qualquer parte do código,
    sendo que seu escopo inicia-se no ponto em que foi declarada e vai até o final do bloco que a contém
*/

// int main(void)
// {
//     cout << "Digite os valores (negativo finaliza):";
//     float soma = 0;
//     while (true)
//     {
//         float valor;
//         cin >> valor;
//         if (valor < 0)
//             break;
//         soma += valor;
//     }
//     cout << "Soma = " << soma << endl;
// }

// int main(void)
// {
//     cout << "Contagem regressiva:"
//          << endl;
//     for (int i = 10; i > 0; i--)
//     {
//         sleep(1);
//         cout << i << endl;
//     }
// }

/*
    Operador de resolução de escopo (::) nos permite acessar uma variável global,
    mesmo que exista uma varável local com o mesmo nome
*/

// int n = 10;

// int main(void)
// {
//     int n = 20;
//     {
//         int n = 30;
//         ::n++;
//         cout << ::n << " " << n << endl;
//     }
//     cout << ::n << " " << n << endl;
// }

//// Constantes

/*
    * A utilização do preprocessador deve ser limitada apenas aos seguintes casos:
    - Inclusão de arquivos
    - Compilação condicional
    * Uma constante não poderá ser modificada durante toda a sua existência e , portanto,
     é imprescindível inicializar uma constante no momento da sua declaração.

*/

// int main(void)
// {
//     const char *ptr1 = "um";         // o objeto apontado é constante
//     char *const ptr2 = "dois";       // o objeto que aponta é constante
//     const char *const ptr3 = "três"; // ambos são constantes
// }

//// Tipos compostos
/*
    * Um tipo composto é um tipo que contém outros tipos.
    * Um tipo composto é definido por meio de uma estrutura (struct) ou de uma união (union).
    * Uma estrutura é um tipo composto que contém um conjunto de variáveis, chamadas de membros.
    * Uma união é um tipo composto que contém um conjunto de variáveis, chamadas de membros, que compartilham o mesmo espaço de memória.
    * Uma enumeração é um tipo composto que contém um conjunto de constantes inteiras.

*/

// struct Ficha
// {
//     char *nome;
//     char *fone;
// };

// enum Logico
// {
//     falso,
//     verdade
// };

// union Numero
// {
//     int i;
//     float f;
// };

// int main(void)
// {
//     Ficha f, *pf;
//     Logico ok;
//     Numero n;

//     n.f = 3.14;
//     n.i = 10;
//     cout << n.i << " " << n.f << endl;
//     cout << ok << endl;
//     ok = verdade;
//     cout << ok << endl;
// }

//// Referências
/*
    Variáveris de referência permite criar uma variável que é um sinônimo de outra variável.

    Uma variável de referÊncia deve ser obrigatoriamente
    inicializada e o tipo de objeto referenciado deve ser o mesmo do objeto que referencia.
*/

// int main(void)
// {
//     int i = 10;
//     int &j = i;
//     cout << i << " " << j << endl;
//     j++;
//     cout << i << " " << j << endl;
// }

// // Alocação de memória

/*
    Em C++, a alocação de memória é feita por meio de dois operadores:
    - new: aloca memória e (chama o construtor do objeto caso seja um objeto)
)    - delete: desaloca memória e chama o destrutor do objeto

É preciso observar que:
• a cada operação new deve corresponder uma operação delete;
• é importante liberar memória assim que ela não seja mais necessária;
• a memória alocada é liberada automaticamente no final da execução do programa.
*/

// int main(void)
// {
//     int *p1 = new int;           // aloca espaço para um int
//     int *p2 = new int(5);        // aloca um int com valor inicial igual a 5
//     int *p3 = new int[5];        // aloca espaço para um vetor com 5 elementos
//     int(*p4)[3] = new int[2][3]; // aloca uma matriz de int 2x3
// }
