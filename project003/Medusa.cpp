/*
 * Program: combatGame
 * Description: Set the information and functions of the Medusa Creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:23:58 PDT 2017
 */

#include "Medusa.hpp"
#include <iostream>
#include <limits>

Medusa::Medusa()
{
    armor = 3;
    strength = 8;
}

int Medusa::attack()
{
    int rolledNum = roll(2, 6);
    if(rolledNum == 12)
    {
        std::cout << name << " activates Glare ability! (max damage)\n";
        return std::numeric_limits<int>::max();
    }
    else
    {
        std::cout << name << " attacks (" << rolledNum << " damage)\n";
        return rolledNum;
    }
}

void Medusa::defend(int atkDmg)
{
    int defense = roll(1, 6) +  armor;
    std::cout << name << " defended (" << defense << " defense)\n";

    int dmgTaken = atkDmg - defense;

    //make sure the dmgTaken is not negative
    if(dmgTaken >= 0)
    {
        strength -= dmgTaken;
    }
    //make sure strength doesn't go negative
    if(strength <= 0)
    {
        strength = 0;
    }
}

