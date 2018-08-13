#include "slideroom.hpp"
#include <iostream>
using namespace std;

slideroom::slideroom(string d,int in){
    setDis(d,in);
}

room* slideroom::move(char in){
    if(getn() == NULL && gete() == NULL && gets() == NULL && getw() == NULL){
        cout << "You're traped!" << endl;
        return this;
    }
    cout << "You hear the room begin to collapse, becoming a trap! (Better not go back)" << endl;
    if(in == 'n' && getn() != NULL){
        room* tmp = getn();
        this->link(NULL,NULL,NULL,NULL);
        return tmp;
    }
    else if(in == 'e' && gete() != NULL){
        room* tmp = gete();
        this->link(NULL,NULL,NULL,NULL);
        return tmp;
    }
    else if(in == 's' && gets() != NULL){
        room* tmp = gets();
        this->link(NULL,NULL,NULL,NULL);
        return tmp;
    }
    else if(in == 'w' && getw() != NULL){
        room* tmp = getw();
        this->link(NULL,NULL,NULL,NULL);
        return tmp;
    }
    else{
        cout << "... a trap that you're now stuck in GAME OVER" << endl;
        return this;
    }
}

bool slideroom::putKey(bool key){
    return false;    
}
bool slideroom::getKey(){
    return false;    
}

void slideroom::action(vector<room*> maze){
    if(getn() == NULL && gete() == NULL && gets() == NULL && getw() == NULL){
       cout << "You cry about being traped" << endl;
    }
    else{
        cout << "You feel like this room could make you cry" << endl;
    }
}