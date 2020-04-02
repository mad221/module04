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


int Type::ft_isdigit() const
{
    int i = 0;
       while (_str[i])
    {
        if ((_str[i] < '0' || _str[i] > '9') && _str[i] != '.') 
            if (_str[i + 1] != '\0')
                return (1);
        i++;
    }
    return (0);
}

int Type::getlenghtpoint() const
{
    int i = 0;
    int s = 0;
    while (_str[i])
    {
        if (_str[i] == '.')
        {
            while (_str[i])
            {
                i++;
                s++;
            }
            return (s - 1);
        }
        i++;
    }
    return (1);
}
void    Type::print() const
{
    if (unprint_char != 1 && isprint(_c) != 0)
        std::cout << "char = " << _c << std::endl;
    else
        std::cout << "char = Error impossible to display character" << std::endl;
    if (out_of_range < 1)
        std::cout << "int = " << i_nb << std::endl;
    else
        std::cout << "int = OUT OF RANGE" << std::endl;
    if (out_of_range < 2)
        std::cout << "float = " << std::setprecision(getlenghtpoint()) << std::fixed << f_nb << "f" << std::endl;
    else
        std::cout << "float = OUT OF RANGE" << std::endl;
    if (out_of_range < 3)
        std::cout << "double = " << d_nb << std::endl;
    else
        std::cout << "double = OUT OF RANGE" << std::endl;    
    }   


int Type::litteralException(int i)
{
    std::cout << "char = impossible" << std::endl;
    std::cout << "int = impossible" << std::endl;
    if (i < 3)
    {
        std::cout << "float = " << _str << std::endl;
        std::cout << "double = impossible" << std::endl;
    }
    else
    {
        std::cout << "float = impossible" << std::endl;
        std::cout << "double = " << _str << std::endl;
    }
    return (1);
}

int Type::ft_exception()
{
    int i = 0;
    std::string array[]= {"-inff", "+ inff", "nanf", "-inf", "+ inf", "nan"};
    while ( i < 7)
    {
        if (array[i] == _str)
            return (litteralException(i));
        i++;
    }
    return (0);
}

std::string Type::getStr()
{
    return (_str);
}

 Type::Type(const std::string &str)
{
    _str = str;   
    unprint_char = 0;
    out_of_range = 0;
    if (ft_exception() == 1)
        return ;
    if (_str.length() > 1 && ft_isdigit() == 1)
         throw (Lenghtexception());
    if (str.length() == 1 && (str[0] < 48 || str[0] > 57))
    {
        _c = str[0];
        i_nb = (int)str[0];
        f_nb = (int)str[0];
        d_nb = (int)str[0];
    }
    else
    {
         try
        { 
            if (std::stoi(_str) >= 0 && std::stoi(_str) <= 256)
                _c = std::stoi(_str);
            else
                unprint_char = 1;
            i_nb = std::stoi(_str);
        }
        catch(const std::out_of_range& e)
        {
            out_of_range++;
        }
        try
        {
            f_nb = std::stof(_str);
        }
        catch(const std::out_of_range& e)
        {
            out_of_range++;
        }
        try
        {
            d_nb = std::stod(_str);
        }
        catch(const std::out_of_range & e)
        {
            out_of_range++;
        }
    }
    print();
    
}