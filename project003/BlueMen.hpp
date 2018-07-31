/*
 * Program: combatGame
 * Description: Header file for the derived Creature class. BlueMen creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:22:00 PDT 2017
 */

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Creature.hpp"

class BlueMen: public Creature
{
    public:
        BlueMen();
        int attack();
        void defend(int atkDmg);
};

#endif
