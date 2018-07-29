#ifndef BARB_HPP_
#define BARB_HPP_
#include "chara.hpp"
using namespace std;

class barb : public chara{
  public:
    barb();
    void attack();
    void defend();
  private:
    int atk = 6;
    int numAtk = 2;
    int def = 6;
    int numDef = 2;
    int armor = 0;
    int hp = 12;
};

#endif /* BARB_HPP_ */