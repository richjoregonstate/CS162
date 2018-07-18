#ifndef ITEM_HPP_
#define ITEM_HPP_
#include <string>
using namespace std;

class item{
 public:
  item();
  void printItem();
  string getItemName();
  char* getJoinTime();
  int getAge();
  bool getGender();
  void setItemName(string in);
  void setJoinTime(char* in);
  void setAge(int in);
  void setGender(bool in);
 private:
  string itemName;
  char* joinTime;
  int age;
  bool gender;
};

#endif /* ITEM_HPP_ */