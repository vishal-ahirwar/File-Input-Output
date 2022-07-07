#include <iostream>
#include <map>
const void AddToContactList(std::map<std::string, std::string> &ContactList);

int main()
{
    std::map<std::string, std::string> ContactsList{};
    while (true)
    {
        static constinit int counter = 0;
        AddToContactList(ContactsList);
        if (++counter > 10)
            break;
    };
    puts("Displaying Contact List. ..");
    for (std::pair<std::string, std::string> Number : ContactsList)
    {
        std::cerr << std::string("Name: ") << Number.first << "\n";
        std::cerr << std::string("Number: ") << Number.second << '\n';
    };
    puts("display: end!");
    return 0;
};
const void AddToContactList(std::map<std::string, std::string> &ContactList)
{
    std::pair<std::string, std::string> NewNumber{};
    std::string Name{}, Number{};
    puts("Name: ");
    std::getline(std::cin, Name);
    puts("Number: ");
    std::getline(std::cin, Number);
    NewNumber = std::pair<std::string, std::string>(Name, Number);

    ContactList[NewNumber.first] = NewNumber.second;
};