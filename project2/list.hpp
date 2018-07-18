#ifndef LIST_HPP_
#define LIST_HPP_
#include "item.hpp"
#include <string>
using namespace std;

class list{
 public:
  list();
  void addItem(string a, char* b,int c, bool d);
  void resize();
  void remove(int a);
  void destroy();
  void print();
 private:
    item *groceryList;
    int size;
    int numberOfItems;
};

#endif /* LIST_HPP_ */