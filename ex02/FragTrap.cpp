#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout <<"FragTrap default constructor called ."<<std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src):ClapTrap(src)
{
    std::cout <<"FragTrap copy constructor called ."<<std::endl;
    *this = src;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout <<"FragTrap parameterized constructor with name called"<<std::endl;
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
     std::cout <<"FragTrap copy assignment operator called."<<std::endl;
    if(this != &src)
    {
        this->name = src.name;
        this->energy_points = src.energy_points;
        this->hit_points = src.hit_points;
        this->attack_damage = src.attack_damage;
    }

    return *this;
}
FragTrap::~FragTrap()
{
    std::cout <<"FragTrap destructor called."<<std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout <<"hig-fives"<<std::endl;
}