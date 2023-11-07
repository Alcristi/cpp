#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cerr << "Wrong number of arguments" << std::endl;
    std::string fileName(argv[1]);
    std::string newFile = fileName + ".replace";
    std::ifstream ifs(fileName.c_str());
    std::ofstream ofs(newFile.c_str());
    if (!ifs.is_open() || !ofs.is_open())
        std::cerr << "Error opening file" << std::endl;
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string line;
    while (std::getline(ifs, line))
    {
        while (line.find(s1) != std::string::npos)
            line.replace(line.find(s1), s1.length(), s2);
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}
