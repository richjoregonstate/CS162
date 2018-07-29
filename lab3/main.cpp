#include <iostream>
#include "list.h"
using namespace std;

int main(){
    list queue;
    char input;
    bool end = false;
    bool takeInput = true;



    while(!end){
        cout << "would you like to A dd, R emove, T op, or Q uit: ";
        cin >> input;
        switch (input){
            case 'A': {
                while(takeInput){
                    cout << "Please enter one char at a time and end with a '.': " << endl;
                    cin >> input;
                    takeInput = (input == '.') ? false : true;
                    queue.addBack(input);
                }
                break;
            }

            case 'R': {
                queue.removeFront();
                break;
            }
            
            case 'T': {
                cout << queue.getFront() << endl;
                break;
            }

            case 'Q': {
                end = true;
                queue.destroy();
                break;
            }
        }
    }    
}