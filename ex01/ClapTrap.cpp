#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout <<"ClapTrap default Constructor Called "<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
    std::cout <<"ClapTrap "<<this->name <<" parameterized constructor called"<<std::endl;
}

ClapTrap &ClapTrap::operator =(ClapTrap const &src)
{
    std::cout <<"ClapTrap "<< src.name <<" copy operator called"<<std::endl;
    if(this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;    
    std::cout <<"ClapTrap "<<src.name<<" copy constructor called"<<std::endl;

}
ClapTrap::~ClapTrap()
{
    std::cout <<"ClapTrap destructor Called"<<std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        std::cout << "ClapTrap " <<this->name<<" attacks "<<
         target <<" causing "<<attackDamage<< " points of damage !" <<std::endl;
        this->energyPoints --;
    }
    else
    {
         std::cout << "ClapTrap " << name 
         << " has no energy or is destroyed and cannot attack." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        hitPoints += amount;
        std::cout <<"ClapTrap "<< name <<" repairs itself, recovering "<< amount 
        <<"hit points"<< std::endl;
    }
    else
    {
        std::cout <<"ClapTrap "<< name
         <<" cannot repair itself due to insufficient energy or because it's destroyed!"<< std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount >= hitPoints) 
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout <<"ClapTrap "<< name <<" takes " << 
    amount<<" points of damage!"<<std::endl;
}