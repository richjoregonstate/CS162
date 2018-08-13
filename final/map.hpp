#ifndef MAP_HPP_
#define MAP_HPP_
#include "obj.hpp"
#include <vector>
using namespace std;

class obj;

class map{
  public:
    map();
    void add(obj*);
    void remove(obj*);
    void generate();
    void print();
    bool empty(int,int);
    void update();
    void clear(int,int);
    void destroy();
    map* getDirection(int);
    void setDirection(map*,int);
    void newMap(int);
    map* moveNorth();
    map* moveEast();
    map* moveSouth();
    map* moveWest();

  private:
    int roomSizeX = 10;
    int roomSizeY = 10;
    obj *floor[10][10];// y,x
    vector<obj*> objects;
    map* north;
    map* east;
    map* south;
    map* west;
    map* id;
};

#endif /* MAP_HPP_ */