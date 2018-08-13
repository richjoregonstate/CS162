#include <iostream>
#include "obj.hpp"
using namespace std;

obj::obj(){

}

char obj::getImg(){
    return img;
}

void obj::setImg(char in){
    img = in;
}

map* obj::getLocation(){
    return location;
}

void obj::setLocation(map* in){
    location = in;
}

int obj::getX(){
    return x;
}

void obj::setX(int a){
    x = a;
}

int obj::getY(){
    return y;
}

void obj::setY(int a){
    y = a;
}

void obj::setType(string in){
    type = in;
}

string obj::getType(){
    return type;
}