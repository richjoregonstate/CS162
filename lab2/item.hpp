#ifndef ITEM_HPP_
#define ITEM_HPP_
#include <string>
using namespace std;

class item{
 public:
  item();
  void printItem();
  int getPrice();
  string getItemName();
  int getNumToBuy();
  string getUnit();
  void setPrice(int a);
  void setItemName(string a);
  void setNumToBuy(int a);
  void  setUnit(string a);
  void destroy();
 private:
  string itemName;
  string unit;
  int numToBuy;
  int price;
};

#endif /* ITEM_HPP_ */