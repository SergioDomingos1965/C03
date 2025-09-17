#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
        std::cout << "ScavTrap default constructor called ." << std::endl;
        this->energy_points = 50;
        this->hit_points = 100;
        this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constructor with name called" << std::endl;
    this->name = name;
    this->energy_points = 50;
    this->hit_points = 100;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src):ClapTrap(src)
{
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        this->name = src.name;
        this->energy_points = src.energy_points;
        this->hit_points = src.hit_points;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energy_points <= 0)
        std::cout <<this->name<<" no energy points"<<std::endl;
    if(this->hit_points <= 0)
            std::cout<< this->name <<" no hit points"<<std::endl;
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout <<"ScavTrap "<< this->name<<" attacks "<< target << " causing "<< this->attack_damage << "  points of damage!"<<std::endl;
        this->energy_points--;
    }
}
ScavTrap::~ScavTrap()
{
    std::cout <<"ScavTrap destructor called ."<<std::endl;
}
void ScavTrap::guardGate()
{
    std::cout <<this->name<<"is now in Gate keeper mode!"<<std::endl;
}


