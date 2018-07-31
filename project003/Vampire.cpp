/*
 * Program: combatGame
 * Description: Set the information and functions of the Vampire Creature.
 * Author: Jeevan Topgi
 * Date: Mon May 15 12:37:57 PDT 2017
 */

#include "Vampire.hpp"
#include <cstdlib>
#include <iostream>

Vampire::Vampire()
{
    armor = 1;
    strength = 18;
}

int Vampire::attack()
{
    int rolledNum =  roll(1, 12);
    std::cout << name << " attacks (" << rolledNum << " damage)\n";
    return rolledNum;
}

void Vampire::defend(int atkDmg)
{
    int charm = rand() % 2; //vampire special ability
    
    if(!charm)
    {
        int defense = roll(1, 6) + armor;
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
    else
    {
        std::cout << name <<  " activates Charm ability! (damage missed)\n";
    }
}

