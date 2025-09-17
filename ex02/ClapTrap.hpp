#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
    protected:
            std::string name;   
            int hit_points;
            int  energy_points;
            int attack_damage; 
    public:
            ClapTrap();
            ClapTrap(const ClapTrap &src);
            ClapTrap(std::string name);
            ClapTrap &operator=(const ClapTrap &src);
            ~ClapTrap();
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
};

#endif