/*
 * Program: combatGame
 * Description: Header file for the derived Creature class. Barbarian creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:22:00 PDT 2017
 */

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Creature.hpp"

class Barbarian: public Creature
{
    public:
        Barbarian();
        int attack();
        void defend(int atkDmg);
};

#endif
