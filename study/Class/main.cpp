/*
    Classe : descreve o modelo estrutural de um objeto, ou seja, define os atributos e métodos que o objeto irá possuir
        - Possui atributos e métodos

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct Data
{
    void define(short, short, short);
    void exibe(void);

private:
    unsigned short data; // |7|4|5|

    /*
        Ao  contrário  da  linguagem  C,  além  dos  campos  de  dados,  a  linguagem  C++  aceita
também a declaração de funções dentro de uma estrutura
    */
};

// int main(void)
// {
//     Data hoje;

//     hoje.define(5, 1, 2000);
//     hoje.exibe();
// }

// void Data::define(short d, short m, short a)
// {
//     data = (a - 1980) << 9 | m << 5 | d;
// }

// void Data::exibe(void)
// {
//     cout << setw(2) << setfill('0')
//          << (data & 0x1F) << "/"
//          << setw(2) << setfill('0')
//          << ((data >> 5) & 0xF) << "/"
//          << (data >> 9) + 1980 << endl;
// }

// // Encapsulamento

/*
    Consiste em impedir o acesso indecido a alguns atributos métodos de uma classe

    - public: todos os atributos e métodos são acessíveis por qualquer função
    - private: todos os atributos e métodos são acessíveis apenas por funções da própria classe
    - protected: todos os atributos e métodos são acessíveis por
    funções da própria classe e por funções de classes derivadas

    **Por default, todos os membros de uma struct são públicos e todos os membros de uma classe são privados

    ** É preferível listar primeiro os menbros públicos e depois os privados
*/

// // Definição de funções membros

/**
 *
 * Normalmente, as funções membros são definidas fora da classe e na classe são
 * declaradas apenas os protótipos.
 *
 *
 * Para associar a definição de função membro à sua declaração,
 * utiliza-se o operador de resolução de escopo (::)
 *
 * Dentro de uma função membro, temos acesso direto a todos outros membros da classe
 *
 *
 */

// // Instanciação de uma classe

/*
-  nome de uma classe representa um novo tipo de
dados.  Podemos  então  definir  variáveis  desse  novo  tipo;  tais  variáveis  são  denomi-
nadas instâncias ou objetos da referida classe.
*/

// // Funções membros constantes
/*
    Temos que garantir que a função membro não irá alterar o estado do objeto, ou seja, não irá alterar os valores dos atributos do objeto
    Para isso, devemos declarar a função membro como const
    Esse tipo de declaração reforça o controle efetuado pelo compilador e permite uma progrmação mais segura
*/

// Um construtor é uma função membro que é chamada automaticamente sempre que uma nova instância de sua classe é criada, garantindo
// assim a correta inicialização dos objetos

/// Um construtor deve ter o mesmo nome da classe a qual pertence e não deve ter
// tipo de retorno, nem mesmo void.

/**
 * O construtor é chamdo apenas quando um objeto é instanciado, ou seja, quando uma variável do tipo da classe é declarada.
 * Não acontece quando definimos um ponteiro para um determinado tipo de objetos
 *
 * Construtores  e  destrutores  são  os  únicos  métodos  não  constantes  que  podem  ser
chamados a partir de objetos constantes.
*/
class Pilha
{
public:
    Pilha(void);          // Construtor que não tem parâmetros ou que tem valores default para todos eles é denomidado construtor default
    Pilha(int);           // Construtor que recebe parâmetros é denominado construtor parametrizado
    Pilha(const Pilha &); // Construtor de cópia (recebe como parâmetro uma referência para um objeto da mesma classe
    ~Pilha(void);
    Pilha *ins(int x); // Destrutor
    void insere(int);
    int remove(void);
    int topo(void) const;
    bool cheia(void) const;
    bool vazia(void) const;

private:
    int max;
    int top;
    int *mem;
};

Pilha::Pilha(void)
{
    max = 100;
    top = -1;
    mem = new int[max];
}

Pilha::~Pilha(void)
{
    cout << "destruindo pilha..." << endl;
    delete[] mem;
}

Pilha::Pilha(int m)
{
    max = m;
    top = -1;
    mem = new int[max];
}

Pilha::Pilha(const Pilha &p)
{
    max = p.max;
    top = p.top;
    mem = new int[max];
    for (int i = 0; i <= top; i++)
        mem[i] = p.mem[i];
}

void Pilha::insere(int e)
{
    if (cheia())
    {
        cout << "Pilha cheia!" << endl;
        exit(1);
    }
    mem[++top] = e;
}

int Pilha::remove(void)
{
    if (vazia())
    {
        cout << "Pilha vazia!" << endl;
        exit(1);
    }
    return mem[top--];
}

int Pilha::topo(void) const
{
    if (vazia())
    {
        cout << "Pilha vazia!" << endl;
        exit(1);
    }
    return mem[top];
}

bool Pilha::cheia(void) const
{
    return top == max - 1;
}

bool Pilha::vazia(void) const
{
    return top == -1;
}

void exibeTopo(Pilha p)
{
    cout << "Topo da pilha: " << p.topo() << endl;
}

// int main(void)
// {
//     Pilha p(10);
//     p.insere(99);
//     exibeTopo(p);

//     // Pilha p(32);
//     // unsigned n;
//     // cout << "Digite um numero: ";
//     // cin >> n;
//     // do
//     // {
//     //     p.insere(n /= 2);
//     // } while (n != 0);
//     // while (!p.vazia())
//     //     cout << p.remove() << endl;
//     // cout << endl;
//     // return 0;
// }

/**
 *
 * Pilha p; // chama o construtor default
 * Pilha q(10); // chama o construtor parametrizado
 * Pilha s[10]; // chama o construtor default 10 vezes
 * Pilha *t; // Não chama nenhum construtor
 * Pilha *v = new Pilha; // chama o construtor default
 * Pilha *u = new Pilha(10); // chama o construtor parametrizado
 */

// Lista de inicialização

/*
 * C++ diferencia inicialização de atribuição
 * Atribuição consite em modificar o valor de uma variável, operação que pode ser efetuada diversas vezes durante a execução de um programa
 * Inicialização consiste em atribuir um valor a uma variável no momento de sua criação, operação que só pode ser efetuada uma única vez
 */

// class A
// {
// public:
//     A(int);
//     A(const A &);
//     ~A(void);
//     A &operator=(const A &);

// private:
//     int x;
// };

// A::A(int n)
// {
//     x = n;
// };

// A::A(const A &a)
// {
//     x = a.x;
// };

// A::~A(void)
// {
//     cout << "destruindo A..." << endl;
// };

// A &A::operator=(const A &a)
// {
//     x = a.x;
//     return *this;
// };

// class B
// {
// public:
//     B(int, int, A);

// private:
//     int y;
//     A a;
// }

// B::B(int a, int b, A c) : x(a), y(b), z(c)
// {
//     // não há mais nada a fazer aqui!
// }

/*
A expressão x(a) indica ao compilador que o dado membro x deve ser inicializado com o
valor do parâmetro a e a expressão z(c) indica que o dado membro z deve ser inicia-
lizado através de uma chamada ao construtor da classe A com o parâmetro c.
*/

// O ponteiro this

/**
 * Todo método tem um parâmetro implícito denominado this.
 * Esse parâmetro é um ponteiro contendo o endereço do objeto que chamou o método
 *
 * Uma função que retorne o ponteiro this pode ser usada de forma encadeada , uma vez que os operadores
 * de seleção de membros são associativos da esquerda para a direita.
 */

Pilha *Pilha::ins(int x)
{
    if (!this->cheia())
        this->mem[++this->top] = x;
    else
        cout << "Pilha cheia!" << endl;
    return this;
}
// int main(void)
// {
//     Pilha *p = new Pilha(10);
//     p->ins(11)->ins(22)->ins(33); // chamadas encadeadas
//     while (!p->vazia())
//         cout << p->remove() << endl;
// }

// // Membros estáticos

/**
 * Membros estáticos são úteis quando precisamos compartilhar uma variável entre todas as instâncias de uma classe.
 *
 * A inicialização de tal dado deverá ser feita fora da classe, em um arquivo de código fonte, por uma declaração global.
 *
 */