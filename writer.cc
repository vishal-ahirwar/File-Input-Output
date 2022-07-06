#include <iostream>
#include <fstream>
#include <iomanip>
#define WIDTH std::setw(15)
void writeToFile(std::ofstream &out, const int &highNumber, const float &Delta);
int main()
{
    std::ofstream file;
    file.open("delta.txt");
    puts("enter the high number ??");
    unsigned int highNumber{};
    float delta{};
    std::cin >> highNumber;
    puts("enter the delta value [float] ???");
    std::cin >> delta;
    writeToFile(file, highNumber, delta);
    puts("[Display Message] End of Program!");
    return 0;
};
void writeToFile(std::ofstream &out, const int &highNumber, const float &Delta)
{
    std::cout<<WIDTH;
    out<<WIDTH;

    if (out.is_open())
    {
        std::cout << "delta Values:\n"
                  << WIDTH << "Positive+" << WIDTH << "Negative-\n\n";
        out << "delta Values:\n"
            << WIDTH << "+" << WIDTH << "-\n\n";
        for (size_t i = 0; i < highNumber; ++i)
        {
            double pos{i * Delta}, neg{(i * Delta) * -1};
            std::cout << WIDTH << pos << WIDTH << neg << "\n";
            out << WIDTH << pos << WIDTH << neg << "\n";
        };
        out.close();
    }
    else
        puts("[error] file creation error!");
}