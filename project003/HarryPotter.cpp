/*
 * Program: combatGame
 * Description: Set the information and functions of the HarryPotter Creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:23:58 PDT 2017
 */

#include "HarryPotter.hpp"
#include <iostream>

HarryPotter::HarryPotter()
{
    armor = 0;
    strength = 10;
    hogwarts = true;
}

int HarryPotter::attack()
{
    int rolledNum = roll(2, 6);
    std::cout << name << " attacks (" << rolledNum << " damage)\n";
    return rolledNum;
}

void HarryPotter::defend(int atkDmg)
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
    //use Harry Potter special ability
    if(strength == 0 && hogwarts)
    {
        strength = 20;
        std::cout << name << " activates Hogwarts ability! (strength = 20)\n";
        hogwarts = false;
    }
}

