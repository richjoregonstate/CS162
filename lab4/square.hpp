#ifndef SQUARE_HPP_
#define SQUARE_HPP_
#include "shape.hpp"

class square : public shape{
    public:
      square();
      double area();
      void print();
};

#endif