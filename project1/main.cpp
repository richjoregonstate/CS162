#include <iostream>
#include <string>
using namespace std; 

bool checkWin(){
    return 0;
}

void printBoard(bool board[3][3]){
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << board[i][j];
        }
    }
    
    return;
}


int main(){
    //Core data
    bool board[3][3] = {NULL};
    bool game = true; //The game is being played
    bool player = true;
    bool useAi;// We will use AI and 'Algorithms'

    //Player names
    string player1;
    string player2;
    
    
    cout << "Welcome to tick tack toe!\nPlayer 1 enter your name: ";
    getline(cin,player1);
    cout << "Player 2 enter your name or hit enter to use and AI Player: ";
    getline(cin,player2);
    useAi = (player2.empty() == 0) ? true : false;
    cout << "To play enter the collum and row of the box you would like to tick. Begin! \n";
    

    
    while(game == true){
        cout << ((player) ? player1 : player2) << " it's your turn!\n";
        printBoard(board);
        break;
    }
    
}