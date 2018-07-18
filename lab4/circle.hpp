#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_
#include "shape.hpp"

class circle : public shape{
    public:
      double area();
      void print();
      void setRadius();
    private:
      int radius;
};

#endif