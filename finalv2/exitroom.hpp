#ifndef EXITROOM_HPP_
#define EXITROOM_HPP_
#include "room.hpp"
#include <string>
using namespace std;

class exitroom : public room{
  public:
    exitroom(string,int);
    string getDis();
    bool putKey(bool);
    bool getKey();
    void action(vector<room*>);
  private:
};

#endif /* EXITROOM_HPP_ */