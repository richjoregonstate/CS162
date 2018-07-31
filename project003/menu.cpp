/*
 * Program: combatGame
 * Description: Provides user with interface to play combatGame.
 * Author: Jeevan Topgi
 * Date: Mon May 15 09:38:50 PDT 2017
 */


#include <iostream>
#include "menu.hpp"
#include "validate.hpp"
#include "Game.hpp"

void menu()
{
    std::cout << "\nWelcome to the Combat Fighter Game.\n\n";

    //provide menu to start new game or exit
    int menuSelect;
    do
    {
        std::cout << "Make a selection\n"
                  << "1. Start a new game\n"
                  << "2. Exit\n"
                  << "Selection: ";
        menuSelect = validate(1, 2);

        switch(menuSelect)
        {
            case 1:
            {
                newGame();
                break;
            }
            case 2:
            {
                std::cout << "\nThanks for playing the Combat Fighter Game.\n";
                break;
            }
        }
        std::cout << std::endl;
    }while(menuSelect != 2);
}

void newGame()
{
    //ask which fighters to fight
    std::cout << "\nSelect fighters\n"
              << "1. Vampire (1 armor, 18 strength, Charm)\n"
              << "2. Barbarian (0 armor, 12 strength)\n"
              << "3. Blue Men (3 armor, 12 strength, Mob)\n"
              << "4. Medusa (3 armor, 8 strength, Glare)\n"
              << "5. Harry Potter (0 armor, 10 strength, Hogwarts)\n"
              << "Fighter 1 Selection: ";
    int ftr1 = validate(1, 5);
    std::cout << "Fighter 2 Selection: ";
    int ftr2 = validate(1, 5);

    //create Game object with these two fighters
    Game game(ftr1, ftr2);

    //play the game (fights until strength == 0)
    game.play();
}

