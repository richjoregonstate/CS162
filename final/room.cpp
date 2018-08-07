#include <iostream>
#include "room.hpp"
using namespace std;

 room::room(){
     for (int i = 0; i < 25; i++){
         for(int j = 0; i < 25; i++){
             floor[i][j] = ' ';
         }
     }
 }