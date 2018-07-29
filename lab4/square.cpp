#include <iostream>
#include "square.hpp"
using namespace std;

square::square(){

}

double square::area(){
    return length * width;
}

void square::print(){
    cout << "L: " << length << " W: " << width << " A: " << area() << endl;
}