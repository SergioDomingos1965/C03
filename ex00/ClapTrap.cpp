#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout <<"Default Constructor Called "<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout <<"ClapTrap "<<this->name <<" parameterized constructor called"<<std::endl;
    this->name = name;
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
}

ClapTrap &ClapTrap::operator =(ClapTrap const &src)
{
    std::cout <<"ClapTrap "<< this->name <<" copy operator called"<<std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout <<"ClapTrap "<<this->name <<"copy constructor called"<<std::endl;
}

void ClapTrap::attack(std::string &target)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}