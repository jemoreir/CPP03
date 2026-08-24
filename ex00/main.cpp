#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap a("Jean");
    ClapTrap b(a);
    ClapTrap c;

    a.attack(b.getName());
    b.takeDamage(3);
    c = b;
    b.takeDamage(100);
    b.attack(a.getName());
    std::cout << c.getHp() << std::endl;
    c.beRepaired(5);
    for (int i = 0; i != 11; i++)
    {
        a.attack(c.getName());
    }
    return (0);
}