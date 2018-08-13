#include <iostream>
#include "chara.hpp"
using namespace std;

chara::chara(){

}

void chara::attk(chara *){

}

void chara::move(int in){
    //Handle moving in rooms
    if(in == 1){
        getLocation()->clear(getX(),getY());
        setY(getY()-1);
    }
    else if(in == 2){
        getLocation()->clear(getX(),getY());
        setX(getX()-1);
    }
    else if(in == 3){
        getLocation()->clear(getX(),getY());
        setY(getY()+1);
    }
    else if(in == 4){
        getLocation()->clear(getX(),getY());
        setX(getX()+1);
    }
    
    //Handle moving between rooms
    if(getY() < 0){// North
        getLocation()->remove(this);
        setLocation(getLocation()->moveNorth());
        getLocation()->add(this);
        setY(9);
    }
    else if(getY() > 9){// South
        getLocation()->remove(this);
        setLocation(getLocation()->moveSouth());
        getLocation()->add(this);
        setY(0);
    }
    else if(getX() < 0){// West
        getLocation()->remove(this);
        setLocation(getLocation()->moveWest());
        getLocation()->add(this);
        setX(9);
    }
    else if(getX() > 9){// East
        getLocation()->remove(this);
        setLocation(getLocation()->moveEast());
        getLocation()->add(this);
        setX(0);
    }

}

void chara::shoot(chara *){

}

void chara::update(){

}
