#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    ICharacter* bob = new Character("bob");
    AMateria* tmp;
    std::cout << "Hello i'm " << bob->getName() << " and i'm a victim\n";
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->use(0, *bob);
    bob->equip(tmp);
    bob->use(0, *moi);
    moi->unequip(0);
    moi->unequip(1);

    moi->use(0, *bob);


    delete bob;
    delete moi;
    delete src;
    return 0;
}