#ifndef _Type_
#define _Type_
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <ctype.h>
#include <iomanip>


class Type
{
    private:
        char _c;
        int  i_nb;
        float f_nb;
        double d_nb;
        int unprint_char;
        int out_of_range;

        std::string _str;
    public:
        Type();
        ~Type();
        Type(const std::string &str);
        int ft_isdigit() const;
        int getlenghtpoint() const;
        void print() const;
        int ft_exception();
        std::string getStr();
        int litteralException(int i);
        class Lenghtexception : public std::exception
        {
            public:
                Lenghtexception();
                ~Lenghtexception();
                virtual const char *what() const throw();
        };
};

#endif