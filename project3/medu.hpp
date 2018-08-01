#ifndef MEDU_HPP_
#define MEDU_HPP_
#include "chara.hpp"
using namespace std;

class medu : public chara{
  public:
    medu();
    /*********************************************************************
** Function: Attack(some chara)
** Description: Generates an attack valuse and passes it to the other chars defence function. If a 12 is rooled the medusa wins
** Parameters: chara *other
** Pre-Conditions: chara != NULL
** Post-Conditions: returns if the other char is killed
*********************************************************************/ 
    bool attack(chara *other);
  private:
};

#endif /* MEDU_HPP_ */