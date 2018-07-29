#ifndef CHARA_HPP_
#define CHARA_HPP_
using namespace std;

class chara{
  public:
    chara();
    ~chara();
    virtual void attack() = 0;
    virtual void defend() = 0;
  private:
    int atk = 0;
    int numAtk = 0;
    int def = 0;
    int numDef = 0;
    int armor = 0;
    int hp = 0;
};

#endif /* CHARA_HPP_ */