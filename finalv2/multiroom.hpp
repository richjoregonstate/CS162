#ifndef MULTIROOM_HPP_
#define MULTIROOM_HPP_
#include "room.hpp"
#include "normalroom.hpp"
#include <vector>
#include <string>
using namespace std;

class multiroom : public room{
  public:
    multiroom(string,int);
    string getDis();
    bool putKey(bool);
    bool getKey();
    void action(vector<room*>);
  private:
    bool portal;
    room* tmp;
};

#endif /* MULTIROOM_HPP_ */