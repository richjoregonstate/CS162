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
    itemName = NULL;
    unit = NULL;
    numToBuy = NULL;
    price = NULL;
}


void item::printItem(){
    cout << "Item: " << itemName << endl << "Number to buy:" << numToBuy << " " << unit << endl << "$" << price << endl << "Total price: $" << price*numToBuy;
}


//Get
int item::getPrice(){
    return price;
}
char* item::getItemName(){
    return itemName;
}
int item::getNumToBuy(){
    return numToBuy;
}
char* item::getUnit(){
    return unit;
}

//Set
void item::setPrice(int a){
    price = a;
}
void item::setItemName(char* a){
    itemName = a;
}
void item::setNumToBuy(int a){
    numToBuy = a;
}
void item::setUnit(char* a){
    unit = a;
}