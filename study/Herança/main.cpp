
// /*
//     Modos de derivação
//         public:     public
//         protected:  protected
//         private:    private
//     Caso nada seja especificado, o compilador assume private para classes e public para estruturas

//     Herança pública : public    
//         Os membros públicos e protegidos da classe base têm a mesma acessibilidade dentro da classe derivada.
//         Esse é o tipo mais comim de herança.
//         O significados das relações fica "Y é um tipo de X " ou "Y é uma especialização de X"
//     Herança protefida: protected
//         Os membros públicos e protegidos na classe base tornam-se membros protegidos na classe derivada.
//         Os membros herdados são acessíveis na implementação da classe base, mas não faz parte de sua interface.

//     Herança privada: private
//         Memvros públicos e protegidos na classe base tornam-se privados na classe derivada. Esse tipo de herança permite modelar
//         relaçoões "Y é composto de X" e, portanto, equivale a fazer da classe base uma dado membro da classe derivada


//     Redefinição 
//         Numa classe derivada é possível redefinir um membro da classe base. Para isso, basta declarar um membro com o mesmo nome
//         Depois da redefinição caso você queria utiliza o membro da classe base, você deve utilizar o operador de resolução de escopo

// */

// // exemplo

// #include <iostream>

// using namespace std;

// class Vetor {
//     public:
//         Vetor(int n);
//         Vetor(const Vetor&);
//         ~Vetor();
//         int tamanho(void){return tam;}
//         double &operator[](int n){return mem[n];}
//         Vetor operator=(const Vetor&);
//     private:
//         int tam;
//         double *mem;
// };

// Vetor::Vetor(int n){
//     tam = n;
//     mem = new double[n];
// }

// Vetor::Vetor(const Vetor& v){
//     tam = v.tam;
//     mem = new double[tam];
//     for(int i = 0; i < tam; i++)
//         mem[i] = v.mem[i];
// }

// Vetor::~Vetor(){
//     delete[] mem;
// }

// Vetor Vetor::operator=(const Vetor& v){
//     if(this != &v){
//         delete[] mem;
//         tam = v.tam;
//         mem = new double[tam];
//         for(int i = 0; i < tam; i++)
//             mem[i] = v.mem[i];
//     }
//     return *this;
// }

// void le(Vetor &v){
//     for(int i = 0; i < v.tamanho(); i++)
//     {
//         cout << i << ":";
//         cin >> v[i];
//     }
// }

// double media(Vetor &v){
//     double soma = 0;
//     for(int i = 0; i < v.tamanho(); i++)
//         soma += v[i];
//     return soma/v.tamanho();
// }

// int main(void)
// {
//     Vetor v(10);
//     le(v);
//     cout << "Media = " << media(v) << endl;
//     return 0;
// }

// // classe derivada

// class VetLim : public Vetor {
//     public:
//         VetLim(int p, int u) : Vetor(u-p+1) {pri=p;ul=u;}
//         int primeiro(void) { return pri; } 
//         int ultimo(void) { return ult; } 
//         double & operator[](int); 
//         Vetor operator=(Vetor v);
//     private:
//         int pri, ult;        

// };

// int &VetLim::operator[](int i){
//     if(i < pri || i > ult){
//         cout << "Indice fora dos limites" << endl;
//         exit(1);
//     }
//     return Vetor::operator[](i-pri);
// }

// class Veiculo {
//     public:
//         Veiculo(char *modelo, char *placa);
//     private:
//         char *modelo;
//         char *placa;
// };

// class Taxi : public Veiculo {
//     public:
//         Taxi(char *modelo, char *placa, int numero);
//     private:
//         int numero;
// };

// Taxi::Taxi(char *modelo,char *placa, int numero) : Veiculo(modelo, placa){
//     this->numero = numero;
// }
#include <iostream>

using namespace std;

class Animal { 
   public: 
      Animal() { cout << "- construindo animal" << endl; } 
     ~Animal() { cout << "- destruindo animal" << endl; } 
}; 
class Mamifero : public Animal { 
   public: 
      Mamifero() { cout << "-- construindo mamifero" << endl; } 
     ~Mamifero() { cout << "-- destruindo mamifero" << endl; } 
}; 
class Homem : public Mamifero { 
   public: 
      Homem() { cout << "--- construindo homem" << endl; } 
     ~Homem() { cout << "--- destruindo homem" << endl; } 
}; 
int main(void) 
{ 
   Homem h; 
}