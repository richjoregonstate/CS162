#include "item.hpp"
#include "list.hpp"
#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>
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


void list::addItem(string a, char* b,int c, bool d){// We left off here
    if(numberOfItems >= size){// If the array is full resize it
        cout << "Resize!\n";
        resize();
    }

    //Check repeating TODO: 

    groceryList[numberOfItems].setItemName(a);    
    groceryList[numberOfItems].setJoinTime(b);
    groceryList[numberOfItems].setAge(c);
    groceryList[numberOfItems].setGender(d);
    numberOfItems++;

    int place = numberOfItems - 1;
    while(tolower(groceryList[place].getItemName()[0] <= tolower(groceryList[place-1].getItemName()[0])) && place >= 0){
        if(tolower(groceryList[place].getItemName()[0] == tolower(groceryList[place-1].getItemName()[0]))){
            for(int i = 0; i < groceryList[place].getItemName().length(); i++){
                if(i > groceryList[place-1].getItemName().length()){
                    return;// Do no more swaps as blank comes before A
                }
                else if(tolower(groceryList[place].getItemName()[i] < tolower(groceryList[place-1].getItemName()[i]))){
                    break;// Swap
                }
                else if(tolower(groceryList[place].getItemName()[i] > tolower(groceryList[place-1].getItemName()[i]))){
                    return;// We are done
                }         
            }
            
        }
        swap(place,place-1);
        place--;
    }
}   

void list::swap(int a, int b){
    item tmp = groceryList[b];
    groceryList[b] = groceryList[a];
    groceryList[a] = tmp;
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
        cout << endl;
        cout << "Member " << i << ": ";
        groceryList[i].printItem();
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