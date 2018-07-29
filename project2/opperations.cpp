#include "opperations.hpp"
#include "list.hpp"
#include <iostream>
#include <string>
#include <ctime>
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
    char* joinTime;
    int age;
    bool gender;
    time_t now = time(0);
    cin.ignore();
    cout << "Name: ";
    getline(cin,itemName);
    cout << "\nAge: ";
    cin >> age;
    cout << "\nGender 1(M) 0(F): ";
    cin >> gender;
    joinTime = ctime(&now);

    myList.addItem(itemName,joinTime,age,gender);
    
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

