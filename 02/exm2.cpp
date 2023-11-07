#include <iostream>

struct overflow 
{
    const char *msg;
    const char *fuction;
    const char *file;
    unsigned line;
};

struct underflow 
{
    const char *msg;
    const char *fuction;
    const char *file;
    unsigned line;
};

struct zero_divide
{
    const char *msg;
    const char *fuction;
    const char *file;
    unsigned line;
};


unsigned add(unsigned a, unsigned b)
{
    if (a + b < a)
        throw overflow{"Overflow", "add", __FILE__, __LINE__};
    return a + b;
}

unsigned sub(unsigned a, unsigned b)
{
    if (a - b > a)
        throw underflow{"Underflow", "sub", __FILE__, __LINE__};
    return a - b;
}

unsigned mul(unsigned a, unsigned b)
{
    if (a * b < a)
        throw overflow{"Overflow", "mul", __FILE__, __LINE__};
    return a * b;
}

unsigned div(unsigned a, unsigned b)
{
    if (b == 0)
        throw zero_divide{"Divide by zero", "div", __FILE__, __LINE__};
    return a / b;
}

unsigned calculate(unsigned a, unsigned b, char op)
{
    switch (op)
    {
        case '+': return add(a, b);
        case '-': return sub(a, b);
        case '*': return mul(a, b);
        case '/': return div(a, b);
        default: throw "Invalid operator";
    }
}



int main(void)
{
    try
    {
        unsigned a, b;
        char op;
        std::cout << "Enter expression (a+b, a-b, a*b, a/b): ";
        std::cin >> a >> op >> b;
        std::cout << "Result = " << calculate(a, b, op) << std::endl;
    }
    catch (overflow &e)
    {
        std::cout << e.msg << " in " << e.fuction << " at " << e.file << ":" << e.line << std::endl;
    }
    catch (underflow &e)
    {
        std::cout << e.msg << " in " << e.fuction << " at " << e.file << ":" << e.line << std::endl;
    }
    catch (zero_divide &e)
    {
        std::cout << e.msg << " in " << e.fuction << " at " << e.file << ":" << e.line << std::endl;
    }
    catch (const char *msg)
    {
        std::cout << "Error: " << msg << std::endl;
    }
    return 0;
}