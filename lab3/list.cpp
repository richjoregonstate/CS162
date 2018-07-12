#include <iostream>
#include "list.h"
using namespace std;

list::list(){
    top = NULL;
    bottom = NULL;
}

void list::addBack(char newData){// !!!ONE NEW!!!
    struct item *tmp = new struct item;
    tmp->letter = newData;
    tmp->next = bottom;
    if(isEmpty()){
        top = tmp;
    }
    bottom = tmp;
    tmp = NULL;
}

void list::removeFront(){// !!!NEEDS ONE DESTROY!!!
    if(isEmpty()){
        cout << "!!!There are no items to remove!!!\n";
        return;
    }
    struct item *tmp = bottom;
    while(tmp->next != top && tmp->next != NULL){// Move to the only item (tmp->next = NULL) or the item before the last (tmp->next = top)
        tmp = tmp->next;
    }

    if(tmp->next == NULL){// If tmp is the only item in the queue
        delete tmp;
        top = NULL;
        bottom = NULL;
    }
    else{// If tmp is not the only item in the queue
        delete top;
        top = tmp;
        top->next = NULL;
    }
}

char list::getFront(){
    if(isEmpty()){
        cout << "!!!THE LIST IS EMPTY!!!\n";
        return ' ';
    }
    return top->letter;
}

bool list::isEmpty(){  
    if(top == NULL && bottom == NULL){
        return true;
    }
    return false;
}

void list::destroy(){
    while(top != bottom){
        removeFront();
    }
    removeFront();
}