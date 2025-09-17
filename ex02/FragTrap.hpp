#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include <iostream>
#include "ClapTrap.hpp"

    class FragTrap: public ClapTrap 
    {
        public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &src);
        FragTrap &operator=(const FragTrap &src);
        void highFivesGuys(void);
    };

#endif