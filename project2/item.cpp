#include "item.hpp"
#include <iostream>
#include <string>
using namespace std;
/*
Item Class: You will use a class for the Items. The class should have data elements
for the following information: item name, unit (i.e. can, box, pounds, or ounces),
number to buy, and unit price. You’ll need a print() function. 
*/

item::item(){
    itemName;
    joinTime;
    age;
    gender;
}

void item::printItem(){
    cout << itemName << endl << joinTime << "Age: " << age << endl << "Gender: " <<((gender) ? 'M' : 'F') << endl;
    cout << endl;
}


//Get
string item::getItemName(){
    return itemName;
}

char* item::getJoinTime(){
    return joinTime;
}

int item::getAge(){
    return age;
}

bool item::getGender(){
    return gender;
}
//Set
void item::setItemName(string in){
    itemName = in;
}

void item::setJoinTime(char* in){
    joinTime = in;
}

void item::setAge(int in){
    age = in;
}

void item::setGender(bool in){
    gender = in;
}