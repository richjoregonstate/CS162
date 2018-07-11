#include "item.hpp"
#include "list.hpp"
#include <iostream>
#include <string>
using namespace std;

/*
List Class: You will also need a List class. The List class will use a 10 element static
array to store Item objects. Think of it as a convenience store shopping list. J As
each item is entered an Item object must created and added to the array. What do you do
if the array is full? What functions will you need? 
*/

list::list(){
    groceryList = new item[10];// grocheryList -> [[item* 0][item* 0][item* 0][item* 0][item* 0][item* 0]]
    size = 10;
    numberOfItems = 0;
}


void list::addItem(string a, string b,int c, int d){// We left off here
    if(numberOfItems >= size){// If the array is full resize it
        cout << "Resize!\n";
        resize();
    }
    
    groceryList[numberOfItems].setItemName(a);    
    groceryList[numberOfItems].setUnit(b);
    groceryList[numberOfItems].setNumToBuy(c);
    groceryList[numberOfItems].setPrice(d);
    
    numberOfItems++;
}   

void list::resize(){
    item *newList = new item[size*2];// Create the larger array
    for(int i = 0; i < size; i++){
        newList[i] = groceryList[i];//  Fill the larger array
    }


    delete [] groceryList;//            Delete the older array
    size = size*2;
    groceryList = newList;//            Set the old pointer to the new array
}

void list::print(){
    for(int i = 0; i < numberOfItems; i++){
        cout << "Item " << i << ": ";
        groceryList[i].printItem();
        cout << endl;
    }
}

void list::remove(int a){
    for(int i = a; i < numberOfItems; i++){
        groceryList[i] = groceryList[i+1];
    }
    
    numberOfItems--;
}

void list::destroy(){
    delete [] groceryList;
}