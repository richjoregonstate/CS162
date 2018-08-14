#ifndef SLIDEROOM_HPP_
#define SLIDEROOM_HPP_
#include "room.hpp"
#include <string>
using namespace std;

class slideroom : public room{
  public:
    slideroom(string,int);
/*********************************************************************
** Function: move(char)
** Description: takes in a directon and returns a pointer to one of it's ajacent rooms or itself
** Parameters: char
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/ 
    room* move(char);
/*********************************************************************
** Function: putKey(bool)
** Description: takes in a bool to see if the user has a key and then unlocks the door if they do
** Parameters: bool
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    bool putKey(bool);
/*********************************************************************
** Function: getKey()
** Description: Gets the key form the room if it is there
** Parameters: N/A
** Pre-Conditions: N/A 
** Post-Conditions: N/A
*********************************************************************/
    bool getKey();
/*********************************************************************
** Function: action(vector<room*>)
** Description: Preforms a room specific action
** Parameters: vector<room*>
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    void action(vector<room*>);
  private:
    room* slideTo;
    int di;
};

#endif /* SLIDEROOM_HPP_ */

/*********************************************************************
** Function: 
** Description: 
** Parameters: 
** Pre-Conditions: 
** Post-Conditions: 
*********************************************************************/