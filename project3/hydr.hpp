#ifndef HYDR_HPP_
#define HYDR_HPP_
#include "chara.hpp"
using namespace std;

class hydr : public chara{
  public:
    hydr();
/*********************************************************************
** Function: Defend()
** Description: Takes in an attack value and lowers it based on defence rolls and ac. Applys dmg if dmg in not droped below 0. If the hydra takes dmg then it has a 20% chance to grow a new head.
** Parameters: dmg
** Pre-Conditions: N/A
** Post-Conditions: Returns if the creature is dead
*********************************************************************/ 
    bool defend(int dmg);
  private:
};

#endif /* HYDR_HPP_ */