#include <iostream>
#include <fstream>
void readFile(std::ifstream &in);
int main()
{
    std::ifstream file;
    file.open("delta.txt");
    readFile(file);
    puts("[Display Message] End of Program!");
    return 0;
};
void readFile(std::ifstream &in)
{
    if (in.is_open())
    {
        std::string data{};
        unsigned int line_number{1};
        while (std::getline(in, data))
        {
            std::cerr << line_number++ << "." << data << "\n";
        };
    }
    else
        puts("failed to open file [maybe file does not exist!]");
}