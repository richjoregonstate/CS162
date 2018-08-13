#include "multiroom.hpp"
#include <iostream>
using namespace std;

multiroom::multiroom(string d,int in){
    setDis(d,in);
    portal = false;
}

bool multiroom::putKey(bool key){
    return false;    
}
bool multiroom::getKey(){
    return false;    
}

void multiroom::action(vector<room*> maze){
    if(portal){
        maze[2]->link(maze[1],maze[14],maze[3],NULL);
        delete tmp;
        maze.erase(maze.begin()+maze.size()-1);
        portal = false;
    }
    else{
        cout << "You pull the lever and a new portal opens to the west!" << endl;
        tmp = new normalroom("A weird portal room!",maze.size());
        maze[2]->link(maze[1],maze[14],maze[3],tmp);
        tmp->link(NULL,maze[2],NULL,maze[10]);
        maze.push_back(tmp);
        portal = true;
    }   
}