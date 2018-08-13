#include "keyroom.hpp"
#include <iostream>
using namespace std;

keyroom::keyroom(string d,int in){
    setDis(d,in);
}


bool keyroom::getKey(){
    if(key){
        return true;
        key = false;
    }
    cout << "You already have the key!" << endl;
    return false;
}

bool keyroom::putKey(bool key){
    return false;    
}

void keyroom::action(vector<room*> maze){
    cout << "You jump for joy as you have found the keyroom!" << endl;
}