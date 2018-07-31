#include <iostream>
#include "chara.hpp"
#include "medu.hpp"
using namespace std;

medu::medu(){
    atk = 6;
    numAtk = 2;
    def = 6;
    numDef = 1;
    armor = 3;
    hp = 8;
}

bool medu::attack(chara *other){
    int dmg = 0;
    for(int i = 0; i < getNumAtk(); i++){// Generate damage
        dmg += rand()%getAtk()+1;
    }
    if(dmg == 12){
        cout << "INF as Medusa turns the other player to stone.";
        return true;
    }
    cout << "" << dmg << endl;
    return other->defend(dmg);
}