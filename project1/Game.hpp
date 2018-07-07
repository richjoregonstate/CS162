#ifndef GAME_HPP_
#define GAME_HPP_
using namespace std;
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Game{
 public:
  Game();

  /*********************************************************************
** Function: makePlay
** Description: Adds a users input to the board based on the player
** Parameters: row, collum, 2d **board, player
** Pre-Conditions: 0 < row < board size / 0 < collum < board size / board 
** Post-Conditions: void
*********************************************************************/ 
  void makePlay(int row,int collum,char **board,bool player);

  /*********************************************************************
** Function: checkWin
** Description: Checks for row / collum / diagnal wins
** Parameters: 2d **board pointer, player, n:size of the board
** Pre-Conditions: board
** Post-Conditions: bool: false for a win true for no win
*********************************************************************/ 
  bool checkWin(char **board, bool player,int n);

  /*********************************************************************
** Function: printBoard
** Description: Prings the board
** Parameters: 2d **board pointer, n:board size
** Pre-Conditions: board
** Post-Conditions: void
*********************************************************************/ 
  void printBoard(char **board, int n);

  /*********************************************************************
** Function: iniBoard
** Description: Sets all the points on the board to *
** Parameters: 2d **board pinter, n:board size
** Pre-Conditions: board
** Post-Conditions: void
*********************************************************************/ 
  void iniBoard(char **board,int n);

  /*********************************************************************
** Function: getInput
** Description: gets and verifys input form the user
** Parameters: 2d **board pinter, n:board size, player, useAi
** Pre-Conditions: board
** Post-Conditions: void
*********************************************************************/ 
  void getInput(char **board,int n,bool player,bool useAi);

  /*********************************************************************
** Function: checkDraw
** Description: checks to see if there is a draw
** Parameters: 2d **board pinter, n:board size
** Pre-Conditions: board
** Post-Conditions: bool: returns true for a draw
*********************************************************************/ 
  bool checkDraw(char **board,int n);
};

#endif /* GAME_HPP_ */