#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include "ClapTrap.hpp"
#include <iostream>
class FragTrap:public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap &src);
    FragTrap &operator = (const FragTrap &src);

    ~FragTrap();

    void highFivesGuys();
};
#endif