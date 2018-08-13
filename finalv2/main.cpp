#include <iostream>
#include <time.h>
#include <vector>
#include <random>
#include "room.hpp"
#include "exitroom.hpp"
#include "keyroom.hpp"
#include "slideroom.hpp"
#include "normalroom.hpp"
#include "multiroom.hpp"
using namespace std;

int main(){
    bool key = 0;
    int moves = 50;
    string backpack[3];
    int numItem = 0;
    //Ini the maze
    room* current = new normalroom("A dark pit at the bottom of the maze",0);
    vector<room*> maze;
    maze.push_back(current);
    for(int i = 1; i < 21; i++){
        maze.push_back(new normalroom("A dark empty hallway with no significant markings",i));
    }
    delete maze[2];// multiroom
    delete maze[8];// Exit
    delete maze[21];// Keyroom
    delete maze[20];// Slide 1
    delete maze[12];// Slide 2
    maze[2] = new multiroom("You stumble upon a room with a lever",2);
    maze[8] = new exitroom("You have found the exit but it is locked",8);
    maze[21] = new keyroom("You have found the key room, grab it and run to the exit!",21);
    maze[20] = new slideroom("This room is very old...",20);
    maze[12] = new slideroom("This room is very old...",12);
    maze[0]->link(NULL,NULL,maze[1],NULL);
    maze[1]->link(maze[0],NULL,maze[2],NULL);
    maze[2]->link(maze[1],maze[14],maze[3],NULL);
    maze[3]->link(maze[2],NULL,NULL,maze[4]);
    maze[4]->link(NULL,maze[3],NULL,maze[5]);
    maze[5]->link(maze[6],maze[4],maze[20],NULL);
    maze[6]->link(maze[9],NULL,maze[5],maze[7]);
    maze[7]->link(maze[8],maze[6],NULL,NULL);
    maze[8]->link(NULL,NULL,maze[7],NULL);
    maze[9]->link(NULL,maze[10],maze[6],NULL);
    maze[10]->link(maze[11],NULL,NULL,maze[9]);
    maze[10]->set("Old book");
    maze[11]->link(NULL,maze[12],maze[10],NULL);
    maze[12]->link(NULL,maze[13],NULL,maze[11]);
    maze[13]->link(maze[12],NULL,maze[14],NULL);
    maze[14]->link(maze[13],maze[15],NULL,maze[2]);
    maze[15]->link(maze[16],maze[17],maze[18],maze[14]);
    maze[16]->link(NULL,NULL,maze[15],NULL);
    maze[17]->link(NULL,NULL,NULL,maze[15]);
    maze[17]->set("Boomerang");
    maze[18]->link(maze[15],maze[21],maze[19],NULL);
    maze[19]->link(maze[18],NULL,maze[20],NULL);
    maze[20]->link(maze[19],NULL,NULL,maze[5]);
    maze[20]->set("Gold statue");
    maze[21]->link(maze[18],NULL,NULL,NULL);
    
    //sseese
    //nnwwswwnwn


    char uin = ' ';
    cout << "Welcome to escape!" << endl << "You must find the key and the gate before time runs out! Good luck!" << endl;
    while(uin != 'q'){
        if(uin == 'n' || uin == 'e' || uin == 's' || uin == 'w'){
            current = current->move(uin);
        }
        else if(uin == 'g'){
            key = current->getKey();
            if(key){
                cout << "You have found the key now you just need to find the exit!" << endl;
            }
            if(current->get() != "" && numItem < 3){
                backpack[numItem] = current->get();
                numItem++;
            }
        }
        else if(uin == 'p'){
            if(current->putKey(key)){
                cout << "Congradulations you have made it out of the maze!" << endl << "You got: " << numItem << "/3 easter eggs" << endl;                
                break;
            }
        }
        else if(uin == 'l'){
            current->look();
            cout << "You have these items in your bag:" << endl;
            for(int i = 0; i < numItem; i++){
                cout << backpack[i] << endl;
            }
            cout << "You " << ((key) ? "do" : "don't") << " have a key" << endl;
        }
        else if(uin == 'a'){
            current->action(maze);
        }
        if(moves == 0){
            cout << "The maze colapses on top of you! You took to long! GAME OVER" << endl;
            break;
        }
        cout << "N E S W | (g)et (p)ut (l)ook (a)ction" << endl << current->getDis() << endl;
        cin >> uin;
        moves--;
    }
    
    for(int i = 0; i < maze.size()+1; i++){
        delete maze[i];
    }
}