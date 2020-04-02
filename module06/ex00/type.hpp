#ifndef _Type_
#define _Type_
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <ctype.h>
#include <iomanip>
#include <climits>
#include <cstring>
#include <cmath>



class Type
{
    private:
        char _c;
        int  i_nb;
        float f_nb;
        double _str;
        int _precision;
    public:
        Type();
        ~Type();
        Type(const double &str, int precision);
        void is_char();
        char check_char();
        int check_int();
        float check_float();
        void is_int();
        void is_float();
        void is_double();

        class Lenghtexception : public std::exception
        {
            public:
                Lenghtexception();
                ~Lenghtexception();
                virtual const char *what() const throw();
        };
        class Unprintable : public std::exception
        {
            public:
                Unprintable();
                ~Unprintable();
                virtual const char *what() const throw();
        };
        class OutOfRange : public std::exception
        {
            public:
                OutOfRange();
                ~OutOfRange();
                virtual const char *what() const throw();
        };
};

#endif