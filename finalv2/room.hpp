#ifndef ROOM_HPP_
#define ROOM_HPP_
#include <vector>
#include <string>
using namespace std;

class room{
  public:
    room();
/*********************************************************************
** Function: getDis()
** Description: returns the room dis
** Parameters: N/A
** Pre-Conditions: N/A 
** Post-Conditions: N/A
*********************************************************************/
    string getDis();
/*********************************************************************
** Function: getId()
** Description: returns the id
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    int getId();
/*********************************************************************
** Function: setDis()
** Description: sets the room dis and id
** Parameters: string, int;
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    void setDis(string,int);
/*********************************************************************
** Function: link()
** Description: links rooms together
** Parameters: room* N, room* E, room* S, room* W
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    void link(room*,room*,room*,room*);
/*********************************************************************
** Function: look()
** Description: prings out all connected rooms
** Parameters: N/A
** Pre-Conditions: N/A 
** Post-Conditions: N/A
*********************************************************************/
    void look();
/*********************************************************************
** Function: putKey(bool)
** Description: takes in a bool to see if the user has a key and then unlocks the door if they do
** Parameters: bool
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    virtual room* move(char);
/*********************************************************************
** Function: getKey()
** Description: Gets the key form the room if it is there
** Parameters: N/A
** Pre-Conditions: N/A 
** Post-Conditions: N/A
*********************************************************************/
    virtual bool putKey(bool) = 0;
    virtual bool getKey() = 0;
    virtual void action(vector<room*>) = 0;
/*********************************************************************
** Function: get()
** Description: gets an item from the room
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    string get();
/*********************************************************************
** Function: set()
** Description: Sets an item in the room
** Parameters: stirng
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    void set(string);
/*********************************************************************
** Function: getn()
** Description: gets north
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    room* getn();
/*********************************************************************
** Function: gete()
** Description: gets east
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    room* gete();
/*********************************************************************
** Function: gets()
** Description: gets south
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    room* gets();
/*********************************************************************
** Function: getw()
** Description: gets west
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/
    room* getw();
  private:
    string dis;
    room* n;
    room* e;
    room* s;
    room* w;
    int id;
    string item = "";
};

#endif /* ROOM_HPP_ */