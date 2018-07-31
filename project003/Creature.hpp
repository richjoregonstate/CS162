/*
 * Program: combatGame
 * Description: Header file for the Creature class.
 * Author: Jeevan Topgi
 * Date: Mon May 15 12:04:17 PDT 2017
 */

#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>

class Creature
{
    protected:
        int armor,
            strength;
        std::string name;
    public:
        Creature();
        virtual int attack() = 0;
        virtual void defend(int atkDmg) = 0;
        int roll(int rolls, int die);
        int getStrength();
        std::string getName();
        void setName(std::string name);
};

#endif
