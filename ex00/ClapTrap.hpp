#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>
class ClapTrap
{
    private:
      std::string name;
      unsigned int hitPoints;
      unsigned int  energyPoints;
      unsigned int  attackDamage;
    public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const &src);
    ClapTrap &operator=(ClapTrap const &src);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};
#endif