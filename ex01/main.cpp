// Falta el header
#include "Zombie.hpp"

int main (void){
    int size = 5;
    Zombie *horde;
    horde = zombieHorde(size, "Antonio");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}