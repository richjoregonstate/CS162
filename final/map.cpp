#include <iostream>
#include "map.hpp"
#include "termcolor.hpp"//https://github.com/ikalnytskyi/termcolor
using namespace std;

 map::map(){
    id = this;
    generate();
 }

map* map::moveNorth(){
    /*if(north == NULL){
        newMap(1);
        cout << "New room!";
    }*/
    return north;
}
map* map::moveEast(){
    /*if(east == NULL){
        newMap(2);
        cout << "New room!";
    }*/
    return east;
}
map* map::moveSouth(){
    /*if(south == NULL){
        newMap(3);
        cout << "New room!";
    }*/
    return south;
}
map* map::moveWest(){
    /*if(west == NULL){
        newMap(4);
        cout << "New room!";
    }*/
    return west;
}

void map::newMap(int dir){
    if(dir == 1){
        north = new map();
        north->setDirection(this,3);// We are south of the north room
    }
    else if(dir == 2){
        east = new map();
        east->setDirection(this,4);// We are west of the east room
    }
    else if(dir == 3){
        south = new map();
        south->setDirection(this,1);// We are north of the south room
    }
    else if(dir == 4){
        west = new map();
        west->setDirection(this,2);// We are east of the west room
    }
}

map* map::getDirection(int in){
    if(in == 1){
        return north;
    }
    else if(in == 2){
        return east;
    }
    else if(in == 3){
        return south;
    }
    else if(in == 4){
        return west;
    }
}

void map::setDirection(map* in,int a){
    if(a == 1){
        north = in;
    }
    else if(a == 2){
        east = in;
    }
    else if(a == 3){
        south = in;
    }
    else if(a == 4){
        west = in;
    }
}

void map::add(obj* a){
    floor[a->getY()][a->getX()] = a;
    objects.push_back(a);
}

void map::remove(obj* in){
    for(int i = 0; i < objects.size(); i++){
       if(objects[i] == in){
           objects.erase(objects.begin()+i);
       }
    }
}

void map::generate(){
    
}

void map::print(){
    cout << endl << "______________________" << id << endl;
    for(int i = 0; i < roomSizeX; i++){
        cout << '|';
        for(int j = 0; j < roomSizeY; j++){
            if(floor[i][j]){
                if(floor[i][j]->getType() == "player"){
                    cout << termcolor::green << floor[i][j]->getImg();
                    cout << termcolor::reset;
                }
                else{
                    cout << floor[j][i]->getImg();
                }
            }
            else{
                cout << '.';
            }
            cout << ' ';
        }
        cout << '|' << endl;
    }
    cout << "______________________" << endl;
}

bool map::empty(int x,int y){
    if(floor[x][y] != NULL){
        return false;
    }
    return true;
}

void map::update(){
    for(int i = 0; i < objects.size(); i++){
       floor[objects[i]->getY()][objects[i]->getX()] = objects[i];// Update locations
       cout << objects[i]->getX() << ':' << objects[i]->getY();
    }
    cout << endl << north << endl << east << endl << south << endl << west << endl;
}

void map::clear(int x,int y){
    floor[y][x] = NULL;
}

void map::destroy(){
    if(north){
        north->destroy();
        delete north;
    }
    if(east){
        east->destroy();
        delete east;
    }
    if(south){
        south->destroy();
        delete south;
    }
    if(west){
        west->destroy();
        delete west;
    }
}