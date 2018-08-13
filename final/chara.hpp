#ifndef CHARA_HPP_
#define CHARA_HPP_
#include "obj.hpp"
using namespace std;

class chara : public obj{
  public:
    chara();
    void attk(chara*);
    void move(int);
    void shoot(chara*);
    void update();
  private:
    int hp;
    //char img;
    //room* Location;
    //int positon[2]; // x y
};

#endif /* CHARA_HPP_ */