#include <iostream>

using namespace std;

int divide (int divisor, int dividend) throw (const char *);

int main(void)
{
    try{
        int result = divide(50,2);
        cout << "result = " << result << endl;
        result = divide(50,0);
        cout << "result = " << result << endl;
    }
    catch(const char *msg){
        cout << "Error: " << msg << endl;
    }
    return 0;
}

int divide (int divisor, int dividend) throw (const char *)
{
    if (dividend == 0)
        throw "Divide by zero error";
    return (divisor/dividend);
}