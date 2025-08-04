#include "ScavTrap.hpp"

int main()
{
    ScavTrap bot("Domingos");
    bot.attack("Faustino");
    bot.takeDamage(101);
    bot.beRepaired(10);
    bot.guardGate();
    return (0);
}