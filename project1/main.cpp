#include <iostream>
#include <string>
#include <random>
#include "Game.hpp"
using namespace std;

/*********************************************************************
** Program Filename: main.cpp
** Author: Jonathan Rich
** Date: July / 6 / 2018
** Description: Plays tick tack toe
** Input: User input
** Output: Tick tack toe board with user input
*********************************************************************/

int main(){
    //Core data
    char **board;
    int size = 3;
    bool game = true; //The game is being played
    bool player = true;
    bool useAi;// We will use AI and 'Algorithms'
    Game tick;

    //Player names
    string player1;
    string player2;
    string input;
    
    cout << "Welcome to tick tack toe!\nPlayer 1 enter your name: ";
    getline(cin,player1);

    cout << "Would you like to use an Ai (Y or N): ";// Ai
    getline(cin,input);
    useAi = ((input[0] == 'Y') ? true : false);
    if(useAi == false){
        cout << "Player 2 enter your name: ";
        getline(cin,player2);
    }
    else{
        player2 = "AI";
    }

    cout << "Would you like to use a custom board (Y or N): ";
    getline(cin,input);
    if(input[0] == 'Y'){
        cout << "How large would you like the board to be: ";
        cin >> size;
    }

    board = new char*[size];
    for(int i = 0; i < size; i++){
        board[i] = new char;
    }
    tick.iniBoard(board,size);
    

    cout << "To play enter the row and collum of the box you would like to tick eg: 1,3. Begin! \n";
    tick.printBoard(board,size);

    
    while(game == true){
        cout << ((player) ? player1 : player2) << " it's your turn!\n";
        tick.getInput(board,size,player,useAi);// Get and valadate input
        tick.printBoard(board,size);// Print the board
        game = tick.checkWin(board,player,size);// Check for a win
        if(game == false){
            cout << "Congradulations player: " << ((player) ? player1 : player2) << " wins!" << endl;
        }
        if(tick.checkDraw(board,size) == true){
            cout << "It's a draw!";
            break;
        }
        player = (player) ? false : true;
    }

    
    for(int i = 0; i < size; i++){
       delete board[i];
    }
    delete [] board;
    
}