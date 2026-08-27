#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap a("jean");
    FragTrap b(a);
    FragTrap c;

    b.attack(a.getName());
    a.takeDamage(b.getAd());
    c = a;
    c.highFivesGuys();
}