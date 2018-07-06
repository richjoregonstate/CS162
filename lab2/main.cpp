#include <iostream>
#include <string>
#include "item.hpp"
#include "list.hpp"
#include "opperations.hpp"
using namespace std;


int main(){
    opperations *opp = new opperations;
    cout << "Welcome to your list!" << endl;
    string ans;
    while(true){
        cout << "Would you like to A dd R emove or P rint: ";
        getline(cin,ans);
        if(ans[0] == 'A' | ans[0] == '1'){
            opp->newItem();
        }
        else if(ans[0] == 'R'){
            opp->print();
            cout << "What item whould you like to remove: ";
            getline(cin,ans);
            opp->remove(ans[0]-48);
            cout << endl;
        }
        else if(ans[0] == 'P'){
            opp->print();
        }
        cout << endl;
    }

    opp->destroy();
    delete opp;
}