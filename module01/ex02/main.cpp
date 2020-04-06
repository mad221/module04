#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomchump()
{
    std::string names[] = {"Elouane", "Elouen", "Elric", "Elvin","Elvis"};
    int i = rand() % 4;
    ZombieEvent event;
    Zombie *zonzon = event.newZombie(names[i]);
    delete (zonzon);
}


int main()
{
    randomchump();
    Zombie zonzon2("max", "beau et grand");
    randomchump();
    return (0);
}