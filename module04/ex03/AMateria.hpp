#ifndef _AMATERIA_
#define _AMATERIA_
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        unsigned int _xp;

    public:
        AMateria();
        
        AMateria(const AMateria &src);

        AMateria(std::string const & type);
        
        virtual ~AMateria();
        
        AMateria &operator=(const AMateria &classe);
        
        std::string const & getType() const;
        
        unsigned int getXP() const; 
        
        virtual AMateria* clone() const = 0;

        virtual void use(ICharacter& target) = 0;

};
#endif