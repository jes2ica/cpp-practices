#include<iostream>
#include<string>

int main()
{
    std::string name1, address1, phone1;
    std::getline(std::cin, name1);
    std::getline(std::cin, address1);
    std::getline(std::cin, phone1);
    std::cout<<name1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phone1<<"\n";
    
    std::string name2, address2, phone2;
    std::getline(std::cin, name2);
    std::getline(std::cin, address2);
    std::getline(std::cin, phone2);
    std::cout<<name2<<"\n";
    std::cout<<"\t\t"<<address2<<"\n";
    std::cout<<"\t\t"<<phone2<<"\n";
    return 0;
}