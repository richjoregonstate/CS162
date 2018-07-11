
#ifndef OPPERATIONS_HPP_
#define OPPERATIONS_HPP_
#include "list.hpp"
#include <string>
using namespace std;

class opperations{
 public:
    opperations();
    void destroy();
    void newItem();
    void remove(int a);
    void print();
  private:
    list myList;
};

#endif /* OPPERATIONS_HPP_ */