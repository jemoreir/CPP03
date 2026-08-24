#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;
public:
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ClapTrap(std::string name);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;
    unsigned int getHp(void) const;
    unsigned int getEp(void) const;
    unsigned int getAd(void) const;
};

#endif