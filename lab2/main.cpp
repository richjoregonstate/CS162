#include <iostream>
#include <string>
#include "item.hpp"
#include "list.hpp"
#include "opperations.hpp"
using namespace std;


int main(){// One odd meemory alloc that I can't find
    opperations opp;
    cout << "Welcome to your list!" << endl;
    string ans;
    int ans2;
    while(true){
        cout << "Would you like to A dd, R emove, P rint, or Q uit: ";
        getline(cin,ans);
        if(ans[0] == 'A' | ans[0] == '1'){
            opp.newItem();
        }
        else if(ans[0] == 'R'){
            opp.print();
            cout << "What item whould you like to remove: ";
            cin >> ans;
            opp.remove(ans2);
            cout << endl;
        }
        else if(ans[0] == 'P'){
            opp.print();
        }
        else if(ans[0] == 'Q'){
            break;
        }
        cout << endl;
    }

    opp.destroy();
}