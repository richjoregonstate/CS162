#ifndef HYDR_HPP_
#define HYDR_HPP_
#include "chara.hpp"
using namespace std;

class hydr : public chara{
  public:
    hydr();
    bool defend(int dmg);
  private:
};

#endif /* HYDR_HPP_ */