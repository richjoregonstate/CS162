/*
 * Program: combatGame
 * Description: Header file for the derived Creature class. Vampire creature.
 * Author: Jeevan Topgi
 * Date: Mon May 15 12:09:06 PDT 2017
 */

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Creature.hpp"

class Vampire: public Creature
{
    public:
        Vampire();
        int attack();
        void defend(int atkDmg);
};

#endif
