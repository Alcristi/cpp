#include <iostream>

using namespace std;

// Funções

// // Protótipo de função
/*
    Um protótipo é uma declaração que especifica a interface de uma função.
    É formado por :
        - Tipo de retorno
        - Nome da função
        - Lista de tipos/parâmetros
    Exemplo:
    int f(int,int) // a função f recebe dois inteiros e retorna um inteiro
    double g(char, int) // a função g recebe um char e um inteiro e retorna um double


    A presença do nome de um parâmetro no protótipo é opcional
    int f(int a, int b) // a função f recebe dois inteiros e retorna um inteiro
    double g(char c, int a) // a função g recebe um char e um inteiro e retorna um double
*/

// Passagem por referência

/*
    Além da passagem por valor, C++ permite a passagem por referência.

    A passagem por referência é uma forma de passagem
    de parâmetros que permite que uma função altere o valor de uma variável do programa que a chamou.
*/

// void troca(int &, int &);

// int main(void)
// {
//     int a = 10, b = 20;
//     troca(a, b);
//     cout << a << " " << b << endl;
// }

// void troca(int &x, int &y)
// {
//     int aux = x;
//     x = y;
//     y = aux;
// }

/*
    A chamada de uma função com parâmetros de referência é muito simples. Essa facili-
    dade  aumenta  a  legibilidade  e  a  potência  da  linguagem;  mas  deve  ser  usada  com
    cautela, já que não há proteção ao valor do parâmetro real que é transmitido à função.

    O uso da palavra reservada const na declaração dos parâmetros de referência permite
    anular o risco de alteração do parâmetro real, ao mesmo tempo em que evita que seu
    valor tenha que ser duplicado na memória, o que ocorreria numa passagem por valor.
*/

// struct Ficha
// {
//     char nome[20];
//     char email[30];
// };

// void exibe(const Ficha &);

// int main(void)
// {
//     Ficha usr = {"Joao", "slago@gmail.com"};

//     exibe(usr);
// }

// void exibe(const Ficha &f)
// {
//     cout << f.nome << " " << f.email << endl;
// }

// bool abrir(FILE *&arquivo, char *nome)
// {
//     arquivo = fopen(nome, "r");
//     return arquivo != NULL;
// }

// int main(void)
// {
//     FILE *arq;
//     if (abrir(arq, "teste.txt"))
//     {
//         cout << "Arquivo aberto com sucesso" << endl;
//         fclose(arq);
//     }
//     else
//     {
//         cout << "Erro ao abrir arquivo" << endl;
//     }
// }

////PAr²metros com valores default

/*
   Existe situações que o argumento da função sempre tem o mesmo valor, para esses casos a linguagem c++ fornece a possibilidade
       de inicializar esse argumento de função com um valor padrão
   Isso permite que o parâmetro seja omitido na chamada da função
   E que não precise sempre ficar atribuindo o mesmo valor para essa variável
*/

// void exibe(int, int = 10, int = 20, int = 30);

// int main(void)
// {
//     exibe(10);
//     exibe(10, 20);
// }

// void exibe(int a, int b, int c, int d)
// {
//     cout << a << " " << b << endl;
//     cout << c << " " << d << endl;
// }

/*
Parâmetros com valores default devem necessariamente ser os últimos da lista e podem
ser declarados tanto no protótipo quanto no cabeçalho da função, desde que tal decla-
ração apareça antes de qualquer uso da função.
*/

////Funções inline

/*
    Uma função inline é uma função cujo código é copiado para o local de chamada, em vez
    de ser executado em um local separado. Isso evita o overhead de uma chamada de função
    e pode resultar em um código mais eficiente.
    Para declarar uma função inline, basta usar a palavra reservada inline antes do tipo de
    retorno da função.

    Ele susbtitui a utilização da diretiva #define para a criação de macros

    A função inline é uma sugestão ao compilador, que pode ou não aceitá-la.

    Por motivos de economia de memória, apenas funções muito curtas devem ser declaradas inline

    Ao  contrário  das  funções  normais,  as  funções  inline  somente  são  visíveis  dentro  do
arquivo no qual são definidas. Isso significa que elas não podem ser usadas em outros
*/

// inline double sqr(double x)
// {
//     return x * x;
// };

// int main(void)
// {
//     cout << sqr(10) << endl;
// };

//// Sobrecarga de funções

/*
    Sobrecarga de funções é a possibilidade de se ter mais de uma função com o mesmo nome, porém com parâmetros diferentes.
    A sobrecarga de funções é uma forma de polimorfismo, que é a capacidade de uma função ter vários comportamentos diferentes.

*/

// int soma(int, int);

// double soma(double, double);

// int main(void)
// {
//     cout << soma(10, 20) << endl;
//     cout << soma(10.5, 20.5) << endl;
// }

// int soma(int a, int b)
// {
//     return a + b;
// }

// double soma(double a, double b)
// {
//     return a + b;
// }