#include "annuary.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
    std::cout << "First_name = ";
    std::getline(std::cin, fisrt_name);
     std::cout << "last name = ";
    std::getline(std::cin, last_name);
     std::cout << "nickname = ";
    std::getline(std::cin, nickname);
     std::cout << "login = ";
    std::getline(std::cin, login);
     std::cout << "postal address = ";
    std::getline(std::cin, postal_address);
     std::cout << "email = ";
    std::getline(std::cin, email);
     std::cout << "phone number = ";
    std::getline(std::cin, phone_number);
     std::cout << "birthday = ";
    std::getline(std::cin, birthday);
     std::cout << "favorite meal = ";
    std::getline(std::cin, favorite_meal);
     std::cout << "underwear = ";
    std::getline(std::cin, underwear);
     std::cout << "darkest secret = ";
    std::getline(std::cin, darkest_secret);
}

void PhoneBook::add_s(int s)
{
    _s = s;
}

void PhoneBook::search()
{
    std::string work;
    work = fisrt_name;
    if (fisrt_name[0] && last_name[0] && nickname[0])
    {
        std::cout << _s + 1 << " :";
    std::cout.width(10);
    std::cout.fill(' ');
    if (work[0])
        std::cout << work.substr(0, 10) << " |";
    std::cout.width(10);
    std::cout.fill(' ');
    work = last_name;
    if (work[0])
        std::cout << work.substr(0, 10) << " |";
    std::cout.width(10);
    std::cout.fill(' ');
    work = nickname;
    if (work[0])
        std::cout << work.substr(0, 10) << " |";
    std::cout << std::endl;
    }
}

void PhoneBook::getValue()
{
    std::cout << "FIRST NAME " << fisrt_name << std::endl;
    std::cout << "LAST NAME " << last_name << std::endl;
    std::cout << "NICKNAME " << nickname << std::endl;
    std::cout << "LOGIN " << login << std::endl;
    std::cout << "POSTAL ADDRESS " << postal_address << std::endl;
    std::cout << "EMAIL " << email << std::endl;
    std::cout << "PHONE NUMBER " << phone_number << std::endl;
    std::cout << "BIRTHDAY " << birthday << std::endl;
    std::cout << "FAVORITE MEAL " << favorite_meal << std::endl;
    std::cout << "UNDERWEAR " << underwear << std::endl;
    std::cout << "DARKEST SECRET " << darkest_secret << std::endl;
}

void PhoneBook::exit()
{
    std::exit(EXIT_SUCCESS);
}

