#include "ClapTrap.hpp"

int main()
{
    ClapTrap bot("Domingos");
    bot.attack("Ana");
    bot.takeDamage(10);
    bot.beRepaired(5);

    return (0);
}