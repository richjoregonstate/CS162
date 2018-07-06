#ifndef LIST_HPP_
#define LIST_HPP_
#include "item.hpp"

class list{
 public:
  list();
  void addItem(char* a, char* b,int c, int d);
 private:
    item *groceryList;
};

#endif /* LIST_HPP_ */