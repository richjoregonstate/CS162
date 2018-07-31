#include <iostream>
#include "chara.hpp"
#include "hydr.hpp"
using namespace std;

hydr::hydr(){
    atk = 6;
    numAtk = 1;
    def = 6;
    numDef = 1;
    armor = 3;
    hp = 12;
}

bool hydr::defend(int dmg){
    int defRoll = 0;
    dmg -= getArmor();
    if(dmg <= 0){// Bounces off armor
        cout << "It bounces off the opponets armor.";
        return false;
    }
    for(int i = 0; i < getNumDef(); i++){
        defRoll += rand()%getDef()+1;
    }
    dmg -= defRoll;
    if(dmg <= 0){// Blocked
        cout << "The opponent manages to block the attack with " << defRoll;
        return false;
    }
    else{// Hit
        setHp(getHp()-dmg);
        cout << "The target is hit";
        if(getHp() <= 0){
            return true;
            cout << "and killed!";
        }
        cout << " and wounded for " << dmg;
        if((rand()%20+1) == 20){
            cout << " causing it to grow another head!";
            setArmor(getArmor()+3);
            setNumAtk(getNumAtk()+1);
        }
        return false;
    }
}