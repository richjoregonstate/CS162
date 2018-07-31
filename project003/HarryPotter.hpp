/*
 * Program: combatGame
 * Description: Header file for the derived Creature class. HarryPotter creature.
 * Author: Jeevan Topgi
 * Date: Tue May 16 10:22:00 PDT 2017
 */

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Creature.hpp"

class HarryPotter: public Creature
{
    private:
        bool hogwarts; //special ability
    public:
        HarryPotter();
        int attack();
        void defend(int atkDmg);
};

#endif
