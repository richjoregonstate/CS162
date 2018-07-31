/* * Program: combatGame
 * Description: Makes the plyrs to fight and display results
 * Author: Jeevan Topgi
 * Date: Mon May 15 10:07:02 PDT 2017
 */

#include "Game.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include "Creature.hpp"
#include <iostream>
#include <cstdlib>

//Set the creature type for each fighter
Game::Game(int type1, int type2)
{
    //set for fighter 1
    switch(type1)
    {
        case 1:
        {
            Vampire *vampire1 = new Vampire;
            vampire1->setName("Vampire1");
            ftr1 = vampire1;
            break;
        }
        case 2:
        {
            Barbarian *barbarian1 = new Barbarian;
            barbarian1->setName("Barbarian1");
            ftr1 = barbarian1;
            break;
        }
        case 3:
        {
            BlueMen *blueMen1 = new BlueMen;
            blueMen1->setName("BlueMen1");
            ftr1 = blueMen1;
            break;
        }
        case 4:
        {
            Medusa *medusa1 = new Medusa;
            medusa1->setName("Medusa1");
            ftr1 = medusa1;
            break;
        }
        case 5:
        {
            HarryPotter *harryPotter1 = new HarryPotter;
            harryPotter1->setName("HarryPotter1");
            ftr1 = harryPotter1;
            break;
        }
    }

    //set for fighter 2
    switch(type2)
    {
        case 1:
        {
            Vampire *vampire2 = new Vampire;
            vampire2->setName("Vampire2");
            ftr2 = vampire2;
            break;
        }
        case 2:
        {
            Barbarian *barbarian2 = new Barbarian;
            barbarian2->setName("Barbarian2");
            ftr2 = barbarian2;
            break;
        }
        case 3:
        {
            BlueMen *blueMen2 = new BlueMen;
            blueMen2->setName("BlueMen2");
            ftr2 = blueMen2;
            break;
        }
        case 4:
        {
            Medusa *medusa2 = new Medusa;
            medusa2->setName("Medusa2");
            ftr2 = medusa2;
            break;
        }
        case 5:
        {
            HarryPotter *harryPotter2 = new HarryPotter;
            harryPotter2->setName("HarryPotter2");
            ftr2 = harryPotter2;
            break;
        }
    }
}

void Game::play()
{
    //create pointer for both plyrs
    Creature *plyr1 = NULL;
    Creature *plyr2 = NULL;

    //coin toss
    int coinToss = rand() % 2 + 1;
     
    switch(coinToss)
    {
        //ftr1 goes first
        case 1:
        {
           plyr1 = ftr1;
           plyr2 = ftr2;
           fight(plyr1, plyr2);
           break;
        }
        //ftr2 goes first
        case 2:
        {
           plyr1 = ftr2;
           plyr2 = ftr1;
           fight(plyr1, plyr2);
           break;
        }
    }
}

//simulate the fight
void Game::fight(Creature *plyr1, Creature *plyr2)
{
    std::cout << "\n" << plyr1->getName() << " versus "
              << plyr2->getName() << "\n\n";

    int loopCounter = 0;
    while(plyr1->getStrength() && plyr2->getStrength())
    {
        std::cout << "Round " << loopCounter + 1 << std::endl;
       
        //Player 1 attacks
        plyr2->defend(plyr1->attack()); 
        
        std::cout << plyr2->getName() << " strength: "
                  << plyr2->getStrength() << std::endl;

        if(plyr2->getStrength() == 0)
        {
            std::cout << plyr2->getName() << " has died. "
                      << plyr1->getName() << " wins.\n";
            break;
        }

        std::cout << std::endl;
       
        //Player 2 attacks 
        plyr1->defend(plyr2->attack()); 

        std::cout << plyr1->getName() << " strength: "
                  << plyr1->getStrength() << std::endl;
        
        if(plyr1->getStrength() == 0)
        {
            std::cout << plyr1->getName() << " has died. "
                      << plyr2->getName() << " wins.\n";
            break;
        }                   
        
        loopCounter++;
        std::cout << std::endl;
    }
}

Game::~Game()
{
    delete ftr1;
    delete ftr2;
}
