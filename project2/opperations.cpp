#include "opperations.hpp"
#include "list.hpp"
#include <iostream>
#include <string>
using namespace std;
/*
Operations: Your program must perform the following activities: create a list, add
items, remove items, and print the list of items. To add an item you should prompt the
user to enter the name, unit of sale, the number needed, and the unit price. 
*/


opperations::opperations(){
    myList;
}

void opperations::newItem(){
    string itemName;
    string unit;
    int numToBuy;
    int price;

    cout << "Item name: ";
    cin >> itemName;
    cout << "\nItem unit: ";
    cin >> unit;
    cout << "\nNumber to buy: ";
    cin >> numToBuy;
    cout << "\nPrice: ";
    cin >> price;

    myList.addItem(itemName,unit,numToBuy,price);
    
}

void opperations::print(){
    myList.print();
}

void opperations::remove(int a){
    myList.remove(a);
}

void opperations::destroy(){
    myList.destroy();
}

