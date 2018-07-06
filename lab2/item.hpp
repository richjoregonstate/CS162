#ifndef ITEM_HPP_
#define ITEM_HPP_

class item{
 public:
  item();
  void printItem();
  int getPrice();
  char* getItemName();
  int getNumToBuy();
  char* getUnit();
  void setPrice(int a);
  void setItemName(char* a);
  void setNumToBuy(int a);
  void  setUnit(char* a);
 private:
  char* itemName;
  char* unit;
  int numToBuy;
  int price;
};

#endif /* ITEM_HPP_ */