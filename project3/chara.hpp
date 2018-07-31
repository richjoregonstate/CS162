#ifndef CHARA_HPP_
#define CHARA_HPP_
using namespace std;

class chara{
  public:
    chara();
    virtual bool attack(chara *other);
    virtual bool defend(int dmg);
    int getAtk();
    int getNumAtk();
    int getDef();
    int getNumDef();
    int getArmor();
    int getHp();
    void setAtk(int input);
    void setNumAtk(int input);
    void setDef(int input);
    void setNumDef(int input);
    void setArmor(int input);
    void setHp(int input);
  protected:
    int atk;
    int numAtk;
    int def;
    int numDef;
    int armor;
    int hp;
};

#endif /* CHARA_HPP_ */