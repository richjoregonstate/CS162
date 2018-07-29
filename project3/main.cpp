#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include "chara.hpp"
#include "barb.hpp"
#include "medu.hpp"
#include "blueM.hpp"
#include "hydr.hpp"
using namespace std;

chara *pick(int uin){
    switch(uin){
        case 0: barb *tmp = new barb; return tmp;
    }
}

void ini(chara* p1, chara* p2,int uin){
    cout << "0: Barbarian" << endl << "1: Medusa" << endl << "2: Blue Men" << endl << "3: Hydra" << endl;
    cin >> uin;
    p1 = pick(uin);
    cout << "Player 2 choose your hero!" << endl;
    cin >> uin;
    p2 = pick(uin);
    cout << endl << endl;
}

void unIni(chara* p1, chara* p2){
    delete p1;
    delete p2;
}

int main(){
    srand((unsigned)time(NULL));
    int uin;
    bool turn = rand()% 1;
    bool game = true;
    chara *player1;
    chara *player2;

    cout << "Welcome to BRAWL!" << endl << "Player 1 choose your hero!" << endl;
    ini(player1,player2,uin);
    
    cout << "thanks for playing" << endl;
    unIni(player1,player2);
}