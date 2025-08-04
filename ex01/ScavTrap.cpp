#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<"ScavTrap default constructor called "<<std::endl;
    name = "Default";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

}
ScavTrap::ScavTrap(const std::string &name)
{   
    std::cout <<"ScavTrap parameterized constructor called "<<std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20; 
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if(this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;    
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout <<"ScavTrap destructor called"<<std::endl;
}
