#ifndef SHAPE_HPP_
#define SHAPE_HPP_

class shape{
    public:
      shape(char* n,char* c, int l,int w);
      virtual double area();
      virtual void print();
    private:
      char * color;
      char * name;
      int length;
      int width;
};

#endif