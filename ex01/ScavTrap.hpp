#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#include "iostream"

    class ScavTrap : public ClapTrap
    {
        public:
            ScavTrap();
            ScavTrap(std::string name);
            ~ScavTrap();
            ScavTrap(const ScavTrap &src);
            ScavTrap &operator=(const ScavTrap &src);
            void attack(const std::string& target);
            void guardGate();
    };

#endif