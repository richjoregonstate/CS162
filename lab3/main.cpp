#include <iostream>
#include "list.h"
using namespace std;

int main(){
    list stack;
    char input;
    bool end = false;
    bool takeInput = true;



    while(!end){
        cout << "would you like to A dd, R emove, T op, or Q uit";
        switch (input){
            case 'a': {
                while(takeInput){
                    cout << "Please enter one char at a time and end with a '.': \n";
                    cin >> input;
                    takeInput = (input == '.') ? false : true;
                    satck.addBack(input);
                }
            }

            case 'R': {
                stack.removeFront();
            }
            
            case 'T': {
                cout << stack.getFront() << endl;
            }

            case 'Q': {
                end = true;
            }
        }
    }
    

}