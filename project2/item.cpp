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
    unit;
    numToBuy;
    price;
}


void item::printItem(){
    cout << itemName << endl << "Number to buy: " << numToBuy << " " << unit << endl<< "Price: $" << price << endl << "Total price: $" << price*numToBuy;
    cout << endl;
}


//Get
int item::getPrice(){
    return price;
}
string item::getItemName(){
    return itemName;
}
int item::getNumToBuy(){
    return numToBuy;
}
string item::getUnit(){
    return unit;
}

//Set
void item::setPrice(int a){
    price = a;
}
void item::setItemName(string a){
    itemName = a;
}
void item::setNumToBuy(int a){
    numToBuy = a;
}
void item::setUnit(string a){
    unit = a;
}