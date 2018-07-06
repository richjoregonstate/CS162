#include <iostream>
#include <string>
using namespace std; 

// Left off adding input

void makePlay(string &input,char board[3][3],bool player){
    board[input[0]][input[2]] = ((player) ? 'X' : 'O');
    return;
}

bool checkWin(char board[3][3], bool player,string &input,int n){
    char checkFor = (player) ? 'X' : 'O';
    int win = 0;
    //Diagnal tl to br
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (board[i][j] == player) {
                win++;
                if(win==n){
                    return true;
                }
            }
        }
    }

    //Diagnal tr to bl
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (board[i][j] == player) {
                win++;
                if(win==n){
                   return true;
                }
            }
        }
    }
    //vertical

    //Horasontal
    return true;
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
    return;
}

void getInput(string &input,char board[3][3]){
    while(true){// Ask the player for good input untill they give it to us
        cout << "Enter a collum,row: ";
        getline(cin,input);
        if(input[0] >= 49 && input[0] <= 51 && input[2] >= 49 && input[2] <= 51){// Check valid input format
            if(board[input[0]-49][input[2]-49] == '*'){// Check valid move
                input[0]-=49;
                input[2]-=49;
                return;
            }
        }
        cout << "Invalid input.\n";
    }
}

int main(){
    //Core data
    char board[3][3];
    int size = 3;
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
    printBoard(board);

    
    while(game == true){
        cout << ((player) ? player1 : player2) << " it's your turn!\n";
        getInput(input,board);// Get and valadate input
        makePlay(input,board,player);// Update the board
        printBoard(board);// Print the board
        game = checkWin(board,player,input,size);// Check for a win
        player = (player) ? false : true;
    }
    
}