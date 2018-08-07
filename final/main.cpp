#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <time.h>
using namespace std;

// THE BEST FUCKING FUNCTION EVER!!!!!!!!
int getkey() {//https://stackoverflow.com/questions/2984307/how-to-handle-key-pressed-in-a-linux-console-in-c
    int character;
    struct termios orig_term_attr;
    struct termios new_term_attr;

    /* set the terminal to raw mode */
    tcgetattr(fileno(stdin), &orig_term_attr);
    memcpy(&new_term_attr, &orig_term_attr, sizeof(struct termios));
    new_term_attr.c_lflag &= ~(ECHO|ICANON);
    new_term_attr.c_cc[VTIME] = 0;
    new_term_attr.c_cc[VMIN] = 0;
    tcsetattr(fileno(stdin), TCSANOW, &new_term_attr);

    /* read a character from the stdin stream without blocking */
    /*   returns EOF (-1) if no character is available */
    character = fgetc(stdin);

    /* restore the original terminal attributes */
    tcsetattr(fileno(stdin), TCSANOW, &orig_term_attr);

    return character;
}

int main(){
    char uin = ' ';
    cout << "Wellcome to CRAWL!" << endl;

    while(uin != 'q'){
        switch(uin){
            case 'w':;// Forward
            case 'a':;// Left
            case 's':;// Right
            case 'd':;// Down
            case 'm':;// Menu
            case 'j':;// Attack
            case 'k':;// Skills
            case 'l':;// Look
        }
            
        uin = getkey();
    }
}