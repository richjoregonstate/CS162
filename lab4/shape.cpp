#include <iostream>
#include "shape.hpp"
using namespace std;

shape::shape(char* n,char* c, int l,int w){
    name = n;
    color = c;
    length = l;
    width = w;
}

double shape::area(){
    return -1;
}

void shape::print(){
    cout << "ERROR! PRINTING FROM SHAPE" << endl;
}