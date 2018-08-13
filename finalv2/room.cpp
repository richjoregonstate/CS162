#include <iostream>
#include "room.hpp"
using namespace std;

room::room(){

}

void room::setDis(string d,int in){
    dis = d;
    id = in;
}

string room::getDis(){
    return dis;
}

int room::getId(){
    return id;
}



room* room::move(char in){
    if(in == 'n' && n != NULL){ 
        return n;
    }
    else if(in == 'e' && e != NULL){
        return e;
    }
    else if(in == 's' && s != NULL){
        return s;
    }
    else if(in == 'w' && w != NULL){
        return w;
    }
    else{
        cout << "You walk into a wall" << endl;
        return this;
    }
}

void room::link(room* a,room* b,room* c,room* d){
    n = a; 
    e = b;
    s = c;
    w = d;
}

void room::look(){
    if(n != NULL){ 
        cout << "There is an exit to the north" << endl;
    }
    if(e != NULL){
        cout << "There is an exit to the east" << endl;
    }
    if(s != NULL){
        cout << "There is an exit to the south" << endl;
    }
    if(w != NULL){
        cout << "There is an exit to the west" << endl;
    }
    if(n == NULL && e == NULL && s == NULL && w == NULL){
        cout << "You are traped in a pit!" << endl;
    }
    cout << "There is a: " << item << " on the floor" << endl;
}

room* room::getn(){
    return n;
}
room* room::gete(){
    return e;
}
room* room::gets(){
    return s;
}
room* room::getw(){
    return w;
}

string room::get(){
    return item;
}

void room::set(string in){
    item = in;
}
