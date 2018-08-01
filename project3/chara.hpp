#ifndef CHARA_HPP_
#define CHARA_HPP_
using namespace std;

class chara{
  public:
    chara();
    /*********************************************************************
** Function: Attack(some chara)
** Description: Generates an attack valuse and passes it to the other chars defence function
** Parameters: chara *other
** Pre-Conditions: chara != NULL
** Post-Conditions: returns if the other char is killed
*********************************************************************/ 
    virtual bool attack(chara *other);
/*********************************************************************
** Function: Defend()
** Description: Takes in an attack value and lowers it based on defence rolls and ac. Applys dmg if dmg in not droped below 0.
** Parameters: dmg
** Pre-Conditions: N/A
** Post-Conditions: Returns if the creature is dead
*********************************************************************/ 
    virtual bool defend(int dmg);
    /*********************************************************************
** Function: get() atk
** Description: gets the charas atk
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: return atk
*********************************************************************/ 
    int getAtk();
    /*********************************************************************
** Function: get() numAtk
** Description: gets the charas numAtk
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: return numAtk
*********************************************************************/ 
    int getNumAtk();
    /*********************************************************************
** Function: get() def
** Description: gets the charas def
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: return def
*********************************************************************/ 
    int getDef();
    /*********************************************************************
** Function: get() num def
** Description: gets the charas num def
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: return num def
*********************************************************************/ 
    int getNumDef();
    /*********************************************************************
** Function: get() armor
** Description: gets the charas armor
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: return armor
*********************************************************************/ 
    int getArmor();
    /*********************************************************************
** Function: get() hp
** Description: gets the charas hp
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: return hp
*********************************************************************/ 
    int getHp();
    /*********************************************************************
** Function: set atk
** Description: set the charas atk
** Parameters: new value
** Pre-Conditions: newe value != null
** Post-Conditions: N/A
*********************************************************************/ 
    void setAtk(int input);
    /*********************************************************************
** Function: set numAtk
** Description: set the charas numAtk
** Parameters: new value
** Pre-Conditions: newe value != null
** Post-Conditions: N/A
*********************************************************************/ 
    void setNumAtk(int input);
    /*********************************************************************
** Function: set def
** Description: set the charas def
** Parameters: new value
** Pre-Conditions: newe value != null
** Post-Conditions: N/A
*********************************************************************/ 
    void setDef(int input);
    /*********************************************************************
** Function: set def
** Description: set the charas def
** Parameters: new value
** Pre-Conditions: newe value != null
** Post-Conditions: N/A
*********************************************************************/ 
    void setNumDef(int input);
    /*********************************************************************
** Function: set numDef
** Description: set the charas numDef
** Parameters: new value
** Pre-Conditions: newe value != null
** Post-Conditions: N/A
*********************************************************************/ 
    void setArmor(int input);
    /*********************************************************************
** Function: set armor
** Description: set the charas armor
** Parameters: new value
** Pre-Conditions: newe value != null
** Post-Conditions: N/A
*********************************************************************/ 
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