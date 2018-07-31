#ifndef MEDU_HPP_
#define MEDU_HPP_
#include "chara.hpp"
using namespace std;

class medu : public chara{
  public:
    medu();
    bool attack(chara *other);
  private:
};

#endif /* MEDU_HPP_ */