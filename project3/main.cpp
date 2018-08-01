#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include "chara.hpp"
#include "barb.hpp"
#include "medu.hpp"
#include "blueM.hpp"
#include "hydr.hpp"
using namespace std;

/*********************************************************************
** Program Filename: program
** Author: Jonathan Rich
** Date: 7/28/2018
** Description: Have a compter algorithm fight itself.
** Input: 2 heros that you want to fight
** Output: Heroic combat
*********************************************************************/

int main(){
    srand(time(NULL));
    int uin;
    bool turn = rand() % 2;
    bool game = true;
    chara *player1;
    chara *player2;

    cout << "Welcome to BRAWL!" << endl;
    //ini(&player1,&player2);
    cout << "0: Barbarian" << endl << "1: Medusa" << endl << "2: Blue Men" << endl << "3: Hydra" << endl;
    cout << "Player 1 choose your hero!" << endl;
    cin >> uin;
    switch(uin){
        case 0: player1 = new barb(); break;
        case 1: player1 = new medu(); break;
        case 2: player1 = new blueM(); break;
        case 3: player1 = new hydr(); break;
    }
    cout << "Player 2 choose your hero!" << endl;
    cin >> uin;
    switch(uin){
        case 0: player2 = new barb(); break;
        case 1: player2 = new medu(); break;
        case 2: player2 = new blueM(); break;
        case 3: player2 = new hydr(); break;
    }
    cout << endl << endl;

    while(game){
        if(turn){
            cout << "Player 1 attacks for "; 
            if(player1->attack(player2)){
                cout << endl << "Player 1 wins!" << endl;
                break;
            } 
            turn = false;
        }
        else{
            cout << "Player 2 attacks for "; 
            if(player2->attack(player1)){
                cout << endl << "Player 2 wins!" << endl;
                break;
            }
            turn = true;
        }
        cout << endl << endl << endl;
        cout << "Player 1: " << player1->getHp() << endl;
        cout << "Player 2: " << player2->getHp();
        cout << endl << endl << endl;
    }
    cout << "thanks for playing" << endl;
    delete player1;
    delete player2;
}