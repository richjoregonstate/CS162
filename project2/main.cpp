#include <iostream>
#include <string>
#include "item.hpp"
#include "list.hpp"
#include "opperations.hpp"
using namespace std;


int main(){// One odd meemory alloc that I can't find
    opperations opp;// Create a new opperations object so we can alter our list
    cout << "Welcome to your list!" << endl;
    string ans;// For takning in y/n answers
    int ans2;// For takning in numberd answers
    while(true){
        cout << endl;
        cout << "Would you like to A dd, R emove, P rint, or Q uit: ";
        cin >> ans;
        if(ans[0] == 'A' | ans[0] == '1'){// Checking input. The 1 is there to allw you to spam 1 and enter to fill the list
            opp.newItem();// Call newItem in opperations.cpp
        }
        else if(ans[0] == 'R'){
            opp.print();// Print out the list so they can choose what to remove
            cout << "What item whould you like to remove: ";
            cin >> ans2;
            opp.remove(ans2);// Delete at index ans2
        }
        else if(ans[0] == 'P'){
            opp.print();// does what is says
        }
        else if(ans[0] == 'Q'){
            break;
        }
    }

    opp.destroy();
}