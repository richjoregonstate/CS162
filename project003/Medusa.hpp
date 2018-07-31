/*
 * Program: combatGame
 * Description: Header file for the derived Creature class. Medusa creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:22:00 PDT 2017
 */

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Creature.hpp"

class Medusa: public Creature
{
    public:
        Medusa();
        int attack();
        void defend(int atkDmg);
};

#endif
