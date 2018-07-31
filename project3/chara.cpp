#include <iostream>
#include "chara.hpp"
using namespace std;

chara::chara(){
    int atk = 0;
    int numAtk = 0;
    int def = 0;
    int numDef = 0;
    int armor = 0;
    int hp = 0;
}

bool chara::attack(chara *other){
    int dmg = 0;
    for(int i = 0; i < getNumAtk(); i++){// Generate damage
        dmg += rand()%getAtk()+1;
    }
    cout << "" << dmg << endl;
    return other->defend(dmg);
}

bool chara::defend(int dmg){
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
        return false;
    }
}

int chara::getAtk(){
    return atk;
}
int chara::getNumAtk(){
    return numAtk;
}
int chara::getDef(){
    return def;
}
int chara::getNumDef(){
    return numDef;
}
int chara::getArmor(){
    return armor;
}
int chara::getHp(){
    return hp;
}

void chara:: setAtk(int input){
    atk = input;
}
void chara:: setNumAtk(int input){
    numAtk = input;
}
void chara:: setDef(int input){
    def = input;
}
void chara:: setNumDef(int input){
    numDef = input;
}
void chara:: setArmor(int input){
    armor = input;
}
void chara:: setHp(int input){
    hp = input;
}