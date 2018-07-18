#include <iostream>
#include "circle.hpp"
using namespace std;

circle::circle(){

}

double circle::area(){
    return radius * radius * 3.14;
}

void circle::print(){
    cout << "R: " << radius << " A: " << area() << endl;
}