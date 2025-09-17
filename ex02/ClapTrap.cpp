#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default"),hit_points(10),energy_points(10), attack_damage(0)
{   
    std::cout <<"ClapTrap Default constructor called."<<std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout <<"ClapTrap parameterized constructor with name called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout <<"Copy constructor called ."<<std::endl;
    *this = src;
}

 ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout <<"copy assignment operator called."<<std::endl;
    if(this != &src)
    {
        this->name = src.name;
        this->energy_points = src.energy_points;
        this->hit_points = src.hit_points;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"ClapTrap Destructor Called. "<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energy_points <= 0)
        std::cout <<this->name<<" no energy points"<<std::endl;
    if(this->hit_points <= 0)
            std::cout<< this->name <<" no hit points"<<std::endl;
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout <<"ClapTrap "<< this->name<<" attacks "<< target << " causing "<< this->attack_damage << "  points of damage!"<<std::endl;
        this->energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit_points == 0)
    {
        std::cout <<this->name<<" no energy points"<<std::endl;
        return;
    }   
    this->hit_points = this->hit_points - amount;
    std::cout <<"Claptrap "<<this->name<<" takes "<< amount<< " points of damage"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->hit_points = this->hit_points + amount;
        std::cout <<" ClapTrap "<< this->name<<" repairs  itself, restoring "<<amount<<std::endl;
    }
    else
        std::cout<< this->name<< " is died"<<std::endl;
}