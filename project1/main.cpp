#include <iostream>
#include <string>
using namespace std; 

//TODO: Add ai, test draw, test win, test board size, test get input limts with larger size

void makePlay(string &input,char **board,bool player){
    board[input[0]][input[2]] = ((player) ? 'X' : 'O');
    return;
}

bool checkWin(char **board, bool player,string &input,int n){
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

void printBoard(char **board, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << ((j==2) ? '\n':'|');
        }
        cout << ((i==2) ? "\n":"_____\n");
    }
    
    return;
}

void iniBoard(char **board,int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            board[i][j] = '*';
        }
    }
    return;
}

void getInput(string &input,char **board,int n){
    while(true){// Ask the player for good input untill they give it to us
        cout << "Enter a row,collum: ";
        getline(cin,input);
        if(input[0] >= 49 && input[0] <= 49+n && input[2] >= 49 && input[2] <= 49+n){// Check valid input format
            if(board[input[0]-49][input[2]-49] == '*'){// Check valid move
                input[0]-=49;
                input[2]-=49;
                return;
            }
        }
        cout << "Invalid input.\n";
    }
}

bool checkDraw(char **board,int n){
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

int main(){
    //Core data
    char **board;
    int size = 3;
    bool game = true; //The game is being played
    bool player = true;
    bool useAi;// We will use AI and 'Algorithms'

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
    iniBoard(board,size);
    

    cout << "To play enter the row and collum of the box you would like to tick eg: 1,3. Begin! \n";
    printBoard(board,size);

    
    while(game == true){
        cout << ((player) ? player1 : player2) << " it's your turn!\n";
        getInput(input,board,size);// Get and valadate input
        makePlay(input,board,player);// Update the board
        printBoard(board,size);// Print the board
        game = checkWin(board,player,input,size);// Check for a win
        if(game == false){
            cout << "Congradulations player: " << ((player) ? player1 : player2) << " wins!" << endl;
        }
        if(checkDraw(board,size) == true){
            cout << "It's a draw!";
            break;
        }
        player = (player) ? false : true;
    }
    
}