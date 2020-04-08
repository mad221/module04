#ifndef _MATERIASOURCE_
#define _MATERIASOURCE_
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        ~MateriaSource();
        MateriaSource();
        MateriaSource(const MateriaSource &src);

        MateriaSource &operator=(const MateriaSource &classe);
        virtual AMateria *createMateria(const std::string &type);
        virtual void learnMateria(AMateria *object);
    private:
        AMateria *_inventory[4];
        int       _index;
};


#endif