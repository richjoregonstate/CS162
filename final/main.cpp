#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <time.h>
#include "map.hpp"
#include "obj.hpp"
#include "player.hpp"
#include "chara.hpp"
using namespace std;

// THE BEST FUCKING FUNCTION EVER!!!!!!!!
int getkey() {//https://stackoverflow.com/questions/2984307/how-to-handle-key-pressed-in-a-linux-console-in-c
    int character;
    struct termios orig_term_attr;
    struct termios new_term_attr;

    /* set the terminal to raw mode */
    tcgetattr(fileno(stdin), &orig_term_attr);
    memcpy(&new_term_attr, &orig_term_attr, sizeof(struct termios));
    new_term_attr.c_lflag &= ~(ECHO|ICANON);
    new_term_attr.c_cc[VTIME] = 0;
    new_term_attr.c_cc[VMIN] = 0;
    tcsetattr(fileno(stdin), TCSANOW, &new_term_attr);

    /* read a character from the stdin stream without blocking */
    /*   returns EOF (-1) if no character is available */
    character = fgetc(stdin);

    /* restore the original terminal attributes */
    tcsetattr(fileno(stdin), TCSANOW, &orig_term_attr);

    return character;
}

int main(){
    char uin = ' ';
    //Generate the map
    map* currentMap = new map();
    currentMap->setDirection(new map(),1);
    currentMap->getDirection(1)->setDirection(currentMap,3);
    currentMap->setDirection(new map(),2);
    currentMap->getDirection(2)->setDirection(currentMap,4);
    currentMap->setDirection(new map(),3);
    currentMap->getDirection(3)->setDirection(currentMap,1);
    currentMap->setDirection(new map(),4);
    currentMap->getDirection(4)->setDirection(currentMap,2);

    player* player1 = new player();
    player1->setLocation(currentMap);
    player1->setX(5);
    player1->setY(5);
    chara* plChara = player1;
    obj* plObj = plChara;
    currentMap->add(plObj);
    cout << "Wellcome to CRAWL!" << endl;
    cout << "Use wasd to move, m for the menu, j to attack, k for skills, l for look, and p for pickup" << endl;

    while(uin != 'q'){
        switch(uin){
            case 'w':
                player1->move(1);// Forward
                break;
            case 'a':
                player1->move(2);// Left
                break;
            case 's':
                player1->move(3);// Right
                break;
            case 'd':
                player1->move(4);// Down
                break;
            case 'm':;// Menu
            case 'j':;// Attack
            case 'k':;// Skills
            case 'l':;// Look
            case 'p':;// Pickup
        }
        if (uin != 'm'){// Display the menu and don't update
            player1->getLocation()->update();// Update the room the player is in.
            player1->getLocation()->print();// Print the room the player is in.
        }
        uin = getkey();
    }
    delete currentMap;
    delete player1;
}