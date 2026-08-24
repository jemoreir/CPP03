#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = "Clap Trap";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Clap Trap constructor called" << std::endl;
    this->_name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other.getName();
        this->HitPoints = other.getHp();
        this->EnergyPoints = other.getEp();
        this->AttackDamage = other.getAd();
    }
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

unsigned int ClapTrap::getHp(void) const
{
    return (this->HitPoints);
}

unsigned int ClapTrap::getEp(void) const
{
    return (this->EnergyPoints);
}

unsigned int ClapTrap::getAd(void) const
{
    return (this->AttackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints < 1 || this->HitPoints < 1)
    {
        std::cout << "Insufficient Hit Points or Energy Points, Please try again." << std::endl;
        return;
    }
    this->EnergyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->HitPoints)
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;
    std::cout << this->_name << " received " << amount << " damage!" << std::endl;
    std::cout << "Now " << this->_name << " has " << this->HitPoints << " hit Points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints < 1 || this->HitPoints < 1)
    {
        std::cout << "Insufficient Hit Points or Energy Points, Please try again." << std::endl;
        return;
    }
    this->EnergyPoints--;
    this->HitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit Points!" << std::endl;
    std::cout << "Now " << this->_name << " has " << this->HitPoints << " hit Points." << std::endl; 
}