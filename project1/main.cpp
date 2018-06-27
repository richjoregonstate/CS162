#include <iostream>
#include <string>
using namespace std; 

// Left off adding input

bool checkWin(){
    return 0;
}

void printBoard(char board[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << board[i][j] << ((j==2) ? '\n':'|');
        }
        cout << ((i==2) ? "\n":"_____\n");
    }
    
    return;
}

void iniBoard(char board[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = '*';
        }
    }
}

void input(string input,char board[3][3]){

}

int main(){
    //Core data
    char board[3][3];
    iniBoard(board);
    bool game = true; //The game is being played
    bool player = true;
    bool useAi;// We will use AI and 'Algorithms'

    //Player names
    string player1;
    string player2;
    string input;
    
    cout << "Welcome to tick tack toe!\nPlayer 1 enter your name: ";
    getline(cin,player1);
    cout << "Player 2 enter your name or hit enter to use and AI Player: ";
    getline(cin,player2);
    useAi = (player2.empty() == 0) ? true : false;
    cout << "To play enter the collum and row of the box you would like to tick eg: 1,3. Begin! \n";
    

    
    while(game == true){
        cout << ((player) ? player1 : player2) << " it's your turn!\n";
        cout << "Enter a collum,row: ";
        getline(cin,input);

        printBoard(board);
        break;
    }
    
}