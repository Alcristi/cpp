#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    double real;
    double image;

public:
    /* Construtores*/
    Complex(double real = 0.0, double image = 0.0);
    ~Complex(void);
    Complex(Complex const &);
    /* Operador de atribuição*/
    Complex &operator=(const Complex &);

    /* Operador de aritmético*/
    Complex operator+(Complex const &);
    Complex operator-(Complex const &);
    Complex operator*(Complex const &);
    Complex operator/(Complex const &);

    /* Operador de In/decrement*/
    Complex &operator++();
    Complex &operator++(int);
    Complex &operator--();
    Complex &operator--(int);

    /* Operador de Comparação*/
    bool operator>(Complex const &);
    bool operator<(Complex const &);
    bool operator>=(Complex const &);
    bool operator<=(Complex const &);
    bool operator==(Complex const &);
    bool operator!=(Complex const &);

    /*Get e Set*/
    double getReal() const
    {
        return this->real;
    }

    double getImage() const
    {
        return this->image;
    }
    /* Funções Base */
    // static Complex &min(Complex &, Complex &);
    // static Complex &min(Complex const &, Complex const &);
    // static Complex &max(Complex &, Complex &);
    // static Complex &max(Complex const &, Complex const &);
};

Complex::Complex(double real, double image)
{
    cout << "Criação do número complexo"
         << "real : " << real << "image : " << image << endl
         << endl;
    this->real = real;
    this->image = image;
}

Complex::~Complex(void)
{
    cout << "O número complexo foi destruido" << endl
         << endl;
}

Complex &Complex::operator=(Complex const &complex)
{
    if (this != &complex)
    {
        this->image = complex.image;
        this->real = complex.real;
    }
    return *this;
}

Complex Complex::operator+(Complex const &complex)
{
    Complex newComplex;

    newComplex.image = this->image + complex.image;
    newComplex.real = this->real + complex.real;

    return newComplex;
}

Complex Complex::operator-(Complex const &complex)
{
    Complex newComplex;

    newComplex.image = this->image - complex.image;
    newComplex.real = this->real - complex.real;

    return newComplex;
}

Complex Complex::operator*(Complex const &complex)
{
    Complex newComplex;

    newComplex.image = this->image * complex.real + this->real * complex.image;
    newComplex.real = this->real * complex.real - this->image * complex.image;

    return newComplex;
}

Complex Complex::operator/(Complex const &complex)
{
    Complex newComplex;
    double modulo;

    modulo = (pow(complex.real, 2) + pow(complex.image, 2));
    newComplex.real = (this->real * complex.real + this->image * complex.image) / modulo;
    newComplex.image = (this->image * complex.real - this->real * complex.image) / modulo;

    return newComplex;
}

Complex &Complex::operator++()
{
    this->real = this->real + 1;
    return *this;
}

Complex &Complex::operator++(int i)
{
    this->real = this->real + 1;
    return *this;
}

Complex &Complex::operator--()
{
    this->real = this->real - 1;
    return *this;
}

Complex &Complex::operator--(int i)
{
    this->real = this->real - 1;
    return *this;
}

bool Complex::operator!=(Complex const &complex)
{
    return this->image != complex.image && this->real != complex.real;
}

bool Complex::operator==(Complex const &complex)
{
    return this->image == complex.image && this->real == complex.real;
}

bool Complex::operator>(Complex const &complex)
{
    return this->real > complex.real;
}

bool Complex::operator<(Complex const &complex)
{
    return this->real < complex.real;
}

bool Complex::operator>=(Complex const &complex)
{
    return this->real >= complex.real;
}

bool Complex::operator<=(Complex const &complex)
{
    return this->real <= complex.real;
}

ostream &operator<<(ostream &out, Complex const &complex)
{
    out << complex.getImage() << "i + " << complex.getReal();
    return out;
}

// static Complex &Complex::min(Complex const &a, Complex const &b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }

// static Complex &Complex::min(Complex &a, Complex &b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }

// static Complex &Complex::max(Complex const &a, Complex const &b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// static Complex &Complex::max(Complex &a, Complex &b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

int main(void)
{
    Complex c(3, 4);
    Complex c2(3, 4);
    cout << c << endl;
    cout << c2 << endl;

    Complex c3 = c + c2;
    cout << c3 << endl;

    Complex c4 = c3 - c2;
    cout << c4 << endl;

    Complex c5 = c / c4;
    cout << c5 << endl;
}