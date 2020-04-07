#include "character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character *ramb = new Character("RAMBO");
    Character rocky("rocky");
    std::cout << "it's not my ware....\n";
    std::cout << *ramb;
    Enemy *b = new RadScorpion();
    Enemy *c = new RadScorpion();
    Enemy *d = new RadScorpion();
    Enemy *e = new SuperMutant();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    
    ramb->equip(pr);
    std::cout << *ramb;
    ramb->attack(b);
    std::cout << *ramb;
    ramb->equip(pf);
    ramb->attack(b);
    std::cout << *ramb;
    ramb->equip(pr);
    std::cout << *ramb;
    ramb->attack(b);
    std::cout << *ramb;
    ramb->attack(b);
    std::cout << *ramb;
    rocky.equip(pf);
    rocky.attack(c);
    ramb->attack(c);
    std::cout << *ramb;
    ramb->attack(c);
    std::cout << *ramb;
    ramb->attack(d);
    std::cout << *ramb;
    ramb->attack(d);
    std::cout << *ramb;
    ramb->attack(e);
    std::cout << *ramb;
    std::cout << "ADRIANNNNNNNNNNN MORE MUNITION !!!!\nDON'T WORRY RAMB I'M HERE\n";
    rocky.attack(e);
    rocky.attack(e);
    rocky.attack(e);
    std::cout << rocky;
    return (0);
}