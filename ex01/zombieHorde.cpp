//header
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *z_horde;
    z_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        z_horde[i].set_name(name);
    return (z_horde);
}
