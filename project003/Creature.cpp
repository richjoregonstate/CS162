/*
 * Program: combatGame
 * Description: Implementation of the Creature base class.
 * Author: Jeevan Topgi
 * Date: Mon May 15 13:17:36 PDT 2017
 */

#include "Creature.hpp"
#include <cstdlib>
#include <string>

Creature::Creature(){}

//roll for the number of rolls with the specified die
int Creature::roll(int rolls, int die)
{
    int tempRoll = 0;
    for(int i = 0; i < rolls; i++)
    {
        tempRoll += rand() % die + 1;
    }
    return tempRoll;
}

//returns the current strength
int Creature::getStrength()
{
    return strength;
}

//returns the name
std::string Creature::getName()
{
    return name;
}

//set the creature name
void Creature::setName(std::string name)
{
    this->name = name;
}
