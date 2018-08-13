#ifndef OBJ_HPP_
#define OBJ_HPP_
#include <string>
#include "map.hpp"
using namespace std;

class map;

class obj{
  public:
    obj();
    char getImg();
    void setImg(char);
    map* getLocation();
    void setLocation(map*);
    int getX();
    void setX(int);
    int getY();
    void setY(int);
    void setType(string);
    string getType();
    virtual void update() = 0;
  private:
    char img;
    string type;
    map* location;
    int x; // x y
    int y;
};

#endif /* OBJ_HPP_ */