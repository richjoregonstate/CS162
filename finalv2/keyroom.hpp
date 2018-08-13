#ifndef KEYROOM_HPP_
#define KEYROOM_HPP_
#include "room.hpp"
#include <string>
using namespace std;

class keyroom : public room{
  public:
    keyroom(string,int);
    string getDis();
    bool getKey();
    bool putKey(bool);
    void action(vector<room*>);
  private:
    bool key = true;
};

#endif /* KEYROOM_HPP_ */