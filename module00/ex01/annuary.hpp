#ifndef _ANNUARY_
#define _ANNUARY_
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

class PhoneBook
{
    private:
    std::string fisrt_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email;
    std::string phone_number;
    std::string birthday;
    std::string favorite_meal;
    std::string underwear;
    std::string darkest_secret;
    int         _s;
    public:
        PhoneBook();
        ~PhoneBook();
        void getValue();
        void search();
        void add();
        void add_s(int s);
        void exit();

};

#endif