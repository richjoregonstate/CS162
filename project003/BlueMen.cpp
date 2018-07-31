/*
 * Program: combatGame
 * Description: Set the information and functions of the BlueMen Creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:23:58 PDT 2017
 */

#include "BlueMen.hpp"
#include <iostream>

BlueMen::BlueMen()
{
    armor = 3;
    strength = 12;
}

int BlueMen::attack()
{
    int rolledNum = roll(2, 10);
    std::cout << name << " attacks (" << rolledNum << " damage)\n";
    return rolledNum;
}

void BlueMen::defend(int atkDmg)
{
    int mob = strength / 4; //special ability
    int defense = roll(mob, 6) + armor;
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

