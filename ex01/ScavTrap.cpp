#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Scav trap default constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Scav trap constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Scav trap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Scav trap copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav trap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoints < 1 || this->HitPoints < 1)
    {
        std::cout << "Scav Trap insufficient hit Points or energy Points, please try again." << std::endl;
        return;
    }
    this->EnergyPoints--;
    std::cout << "Scav Trap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Scav Trap: " << this->_name << " is now in gate keeper mode." << std::endl;
}
