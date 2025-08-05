#include "FragTrap.hpp"

FragTrap :: FragTrap() : ClapTrap("Default")
{
    std::cout << "FragTrap default constructor called " << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}
FragTrap :: FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap default constructor called " << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;  
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if(this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
        
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}