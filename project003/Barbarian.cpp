/*
 * Program: combatGame
 * Description: Set the information and functions of the Barbarian Creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:23:58 PDT 2017
 */

#include "Barbarian.hpp"
#include <iostream>

Barbarian::Barbarian()
{
    armor = 0;
    strength = 12;
}

int Barbarian::attack()
{
    int rolledNum = roll(2, 6);
    std::cout << name << " attacks (" << rolledNum << " damage)\n";
    return rolledNum;
}

void Barbarian::defend(int atkDmg)
{
    int defense = roll(2, 6) + armor;
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

