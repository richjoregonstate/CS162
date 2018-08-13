#include "exitroom.hpp"
#include <iostream>
using namespace std;

exitroom::exitroom(string d,int in){
    setDis(d,in);
}

bool exitroom::putKey(bool key){
    if(key){
        return true;
    }
    return false;
}

bool exitroom::getKey(){
    return false;    
}

void exitroom::action(vector<room*> maze){
    cout << "You jump for joy as you have found the exit!" << endl;
}