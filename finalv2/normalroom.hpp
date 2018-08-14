#ifndef NORMALROOM_HPP_
#define NORMALROOM_HPP_
#include "room.hpp"
#include <string>
using namespace std;

class normalroom : public room{
  public:
    normalroom(string,int);
/*********************************************************************
** Function: getDis()
** Description: returns the room dis
** Parameters: N/A
** Pre-Conditions: N/A 
** Post-Conditions: N/A
*********************************************************************/	
    string getDis();
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
};

#endif /* NORMALROOM_HPP_ */