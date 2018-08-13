#include "normalroom.hpp"
#include <iostream>
using namespace std;

normalroom::normalroom(string d,int in){
    setDis(d,in);
}

bool normalroom::putKey(bool key){
    return false;    
}
bool normalroom::getKey(){
    return false;    
}

void normalroom::action(vector<room*> maze){
    int tip = getId();
    
    switch (tip)
    {
        case 19:
            cout << "Your spidy sence is tingling" << endl;
            break;
        case 5:
            cout << "Your spidy sence is tingling" << endl;
            break;
        case 11:
            cout << "Your spidy sence is tingling" << endl;
            break;
        case 13:
            cout << "Your spidy sence is tingling" << endl;
            break;
        default:
            break;
    }
}