#ifndef ROOM_HPP_
#define ROOM_HPP_
#include <vector>
#include <string>
using namespace std;

class room{
  public:
    room();
    string getDis();
    int getId();
    void setDis(string,int);
    void link(room*,room*,room*,room*);
    void look();
    virtual room* move(char);
    virtual bool putKey(bool) = 0;
    virtual bool getKey() = 0;
    virtual void action(vector<room*>) = 0;
    string get();
    void set(string);
    room* getn();
    room* gete();
    room* gets();
    room* getw();
  private:
    string dis;
    room* n;
    room* e;
    room* s;
    room* w;
    int id;
    string item = "";
};

#endif /* ROOM_HPP_ */