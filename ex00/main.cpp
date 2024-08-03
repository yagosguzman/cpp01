// Falta el header
#include "Zombie.hpp"

int main (void){
    Zombie *zombieptr = newZombie("Jose Luis");
    zombieptr->announce();
    delete zombieptr;
    randomChump("Paquillo");
    return (0);
}