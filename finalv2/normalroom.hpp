#ifndef NORMALROOM_HPP_
#define NORMALROOM_HPP_
#include "room.hpp"
#include <string>
using namespace std;

class normalroom : public room{
  public:
    normalroom(string,int);
    string getDis();
    bool putKey(bool);
    bool getKey();
    void action(vector<room*>);
  private:
};

#endif /* NORMALROOM_HPP_ */