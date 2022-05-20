#include "GuestUser.h"   //header files IT21313370
#include "RegisteredUser.h"
#include "Musicteacher.h"
#include "Student.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;
Item::Item()
{
  itemID = 0;
  strcpy(itemType, "");
  strcpy(itemName, "");
  price = 0.0;
}
Item::Item(int pitemID, const char pItemType[], const char
pitemName[], double pPrice)
{
  itemID = pitemID;
  strcpy(itemType, pItemType);
  strcpy(itemName, pitemName);
  price = pPrice;
}
void Item::displayItemDetails()
{
  cout << "Item ID: " << itemID << endl;
  cout << "Item Name: " << itemName << endl;
  cout << "Item Type: " << itemType << endl;
  cout << "Item Price: " << price << endl;
  cout << " " << endl;
  cout << "****************************" << endl;
}
void Item::addItem()
{
  cout << "Item Type: " << endl;
  cin >> itemType;
  cout << "Item Name: " << endl;
  cin >> itemName;
}
void Item::removeItem()
{

cout << "Item Type: " << endl;
cin >> itemType;
cout << "Item Name: " << endl;
cin >> itemName;
}
Item::~Item()
{
cout << itemID << "deleted from the memory" << endl;
}
