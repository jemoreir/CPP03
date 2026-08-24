#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap a("jean");
    ScavTrap b(a);
    ScavTrap c;

    b.attack(a.getName());
    a.takeDamage(20);
    c = a;
    c.guardGate();
}