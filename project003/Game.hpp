/*
 * Program: combatGame
 * Description: Header file for the Game class.
 * Author: Jeevan Topgi
 * Date: Mon May 15 10:04:18 PDT 2017
 */

#ifndef GAME_HPP
#define GAME_HPP

#include "Creature.hpp"
#include <cstdlib>

class Game
{
    private:
        Creature *ftr1 = NULL;
        Creature *ftr2 = NULL;
        void fight(Creature *fighter1, Creature *fighter2);
    
    public:
        Game(int type1, int type2);
        void play();
        ~Game();
};

#endif
