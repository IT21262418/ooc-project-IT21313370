#pragma once
#include "GuestUser.h"      //header files
#include "RegisteredUser.h"
#include "Musicteacher.h"
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
class Item {
  private:
  int itemID;                 //data types
  char itemType[20];
  char itemName[20];
  float price;
  public:
  Item();
  Item(int pitemID, const char pItemType[], const char
  pitemName[], double pPrice);
  void displayItemDetails();
  void addItem();
  void removeItem();
  ~Item();
};