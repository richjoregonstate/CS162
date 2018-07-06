#include "item.hpp"
#include "list.hpp"
#include <iostream>
using namespace std;

/*
List Class: You will also need a List class. The List class will use a 10 element static
array to store Item objects. Think of it as a convenience store shopping list. J As
each item is entered an Item object must created and added to the array. What do you do
if the array is full? What functions will you need? 
*/

list::list(){
    this->groceryList = new item[10];
}


void list::addItem(char* a, char* b,int c, int d){// We left off here
    
}