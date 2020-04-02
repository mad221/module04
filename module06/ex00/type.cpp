#include "type.hpp"

Type::Type()
{

}

Type::~Type()
{

}

Type::Lenghtexception::Lenghtexception()
{

}

Type::Lenghtexception::~Lenghtexception()
{

}

const char* Type::Lenghtexception::what() const throw()
{
        return ("Error: not convertible");
}

Type::Unprintable::Unprintable()
{

}
Type::Unprintable::~Unprintable()
{

}

const char* Type::Unprintable::what() const throw()
{
        return ("Error: not printable");
}


char Type::check_char()
{
    if (std::isnan(_str) == true)
    {
        throw Lenghtexception();
    }
    _c = static_cast<char>(_str);
    if (std::isprint(_c) == false)
    {
        throw Unprintable();
    }
    return (_c);
}

void Type::is_char()
{
    std::cout << "char = " << check_char() << std::endl;
}


int Type::check_int()
{
    if (std::isnan(_str) == true || std::isinf(_str) == true)
    {
        throw Lenghtexception();
    }
    if (INT_MAX < _str || INT_MIN > _str)
    {
        throw OutOfRange();
    }
    i_nb = static_cast<int>(_str);
    return (i_nb);
}

Type::OutOfRange::OutOfRange()
{

}


Type::OutOfRange::~OutOfRange()
{

}

const char *Type::OutOfRange::what() const throw()
{
    return ("Error: Out Of Range");
}

void Type::is_int()
{
    std::cout << "int = " << check_int() << std::endl;
}

float Type::check_float()
{

    f_nb = static_cast<float>(_str);
    return (f_nb);
}

void Type::is_float()
{
    std::cout << "Float = " << std::setprecision(_precision) << std::fixed  << check_float() << "f" << std::endl;
}

void Type::is_double()
{
    std::cout << "Double = " << _str << std::endl;
}

Type::Type(const double &str, int precision)
{
    _str = str;
    _precision = precision;
    try {
        is_char();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
         is_int();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    is_float();
    is_double();
}