#include <string>
#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str; 
    std::string &strREF = str;

    std::cout << "memory address of [str]\t\t" << &str << std::endl;
    std::cout << "memory address held [strPTR]\t" << strPTR << std::endl;
    std::cout << "memory address held [strREF]\t" << &strREF << std::endl;

    std::cout << "value [str]\t\t" << str << std::endl;
    std::cout << "value pointed [strPTR]\t" << *strPTR << std::endl;
    std::cout << "value pointed [strREF]\t" << *&strREF << std::endl;

}