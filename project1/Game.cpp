#include "Game.hpp"
#include <iostream>
#include <string>
#include <random>
#include <assert.h>  
using namespace std;

Game::Game(){
    srand (time(NULL));
}

void Game::makePlay(int row,int collum,char **board,bool player){
    assert(board);
    board[row][collum] = ((player) ? 'X' : 'O');
    return;
}

bool Game::checkWin(char **board, bool player,int n){
    assert(board);
    char checkFor = (player) ? 'X' : 'O';
    int win = 0;

    //Diagnal tl to br
    for(int i = 0; i < n; i++){
        if(board[i][i] == checkFor){
            win++;
        }
    }
    if (win == n){
        return false;
    }
    else{
        win = 0;
    }

    //Diagnal tr to bl
    for(int i = 0; i < n; i++){
        if(board[i][n-i-1] == checkFor){
            win++;
        }
    }
    if (win == n){
        return false;
    }
    else{
        win = 0;
    }

    //vertical
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == checkFor){
                win++;
            }
        }
        if (win == n){
            return false;
        }
        else{
            win = 0;
        }
    }


    //Horasontal
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[j][i] == checkFor){
                win++;
            }
        }
         if (win == n){
        return false;
        }
        else{
            win = 0;
        }
    }

    return true;

}

void Game::printBoard(char **board, int n){
    assert(board);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << ((j==n-1) ? '\n':'|');
        }
        cout << endl;
    }
    
    return;
}

void Game::iniBoard(char **board,int n){
    assert(board);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            board[i][j] = '*';
        }
    }
    return;
}

void Game::getInput(char **board,int n,bool player,bool useAi){
    assert(board);
    int row;
    int collum;
    while(true){// Ask the player for good input untill they give it to us
        if(useAi == true && player == false){
            row = rand() % n;
            collum = rand() % n;
            cout << row << ":" << collum << " " << board[row][collum] << endl;
            if(row >= 0 && row <= n && collum >= 0 && collum <= n){// Check valid input format
                if(board[row][collum] == '*'){// Check valid move
                    makePlay(row,collum,board,player);
                    return;
                }
            }
        }
        else{
            cout << "Enter a row: ";
            cin >> row;
            cout << "Enter a collum: ";
            cin >> collum;
            collum--;
            row--;
            cout << row << ":" << collum << " " << board[row][collum] << endl;
            if(row >= 0 && row <= n && collum >= 0 && collum <= n){// Check valid input format
                if(board[row][collum] == '*'){// Check valid move
                    makePlay(row,collum,board,player);
                    return;
                }
            }
            cout << "Invalid input.\n";
        }
    }
}

bool Game::checkDraw(char **board,int n){
    assert(board);
    int draw = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!board[i][j] == '*'){
                draw++;
            }
        }
    }
    return (n*n == draw) ? true : false;
}