#ifndef SLIDEROOM_HPP_
#define SLIDEROOM_HPP_
#include "room.hpp"
#include <string>
using namespace std;

class slideroom : public room{
  public:
    slideroom(string,int);
    room* move(char);
    bool putKey(bool);
    bool getKey();
    void action(vector<room*>);
  private:
    room* slideTo;
    int di;
};

#endif /* SLIDEROOM_HPP_ */