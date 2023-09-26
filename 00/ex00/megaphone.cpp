#include <iostream>

int main(int argc, char *argv[])
{
    std::string str = "";
    std::string upperCaseStr;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return -1;
    }
    for (int i = 1; i < argc; i++)
    {
        str += argv[i];
        if (i + 1 != argc)
            str += " ";
    }
    for (size_t i = 0; i < str.length(); i++)
        upperCaseStr += std::toupper(str[i]);
    std::cout << upperCaseStr << std::endl;
    return (0);
}