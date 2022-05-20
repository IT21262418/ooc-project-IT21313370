#include "RegisteredUser.h" //header files IT21313370
#include "GuestUser.h"
#include <iostream>
#include <cstring>
using namespace std;
#define SIZE1 2
#define SIZE2 2
RegisteredUser::RegisteredUser()
{
  nic = 0;
  strcpy(password, "");
  strcpy(userName, "");
  strcpy(userAddress, "");
  strcpy(userEmail, "");
  userContactNo = 0;
  userID = 0;
  strcpy(country, "");
}
RegisteredUser::RegisteredUser(const char pName[50], const char
pAddress[50], const char pEmail[30], int pContactNo, int pUserID, 
const char pCountry[20], int pnic, const char ppassword[10], int
pay1, int pay2, Item* pitem[]) : GuestUser(pName, pAddress, pEmail, 
pContactNo, pUserID, pCountry)
{
  nic = pnic;
  strcpy(password, ppassword);
  strcpy(userName, pName);
  strcpy(userAddress, pAddress);
  strcpy(userEmail, pEmail);
  userContactNo = pContactNo;
  userID = pUserID;
  strcpy(country, pCountry);
  pay[0] = new Payment(pay1);
  pay[1] = new Payment(pay2);
for (int j = 0; j <= SIZE2; j++)
{
  item[j] = pitem[j];
}
}
void RegisteredUser::displayUserDetails()
{

  cout << "Student ID: " << userID << endl;
  cout << "NIC : " << nic << endl;
  cout << "Name : " << userName << endl;
  cout << "Address : " << userAddress << endl;
  cout << "Email : " << userEmail << endl;
  cout << "ContactNo : " << userContactNo << endl;
  cout << "Country name : " << country << endl;
}
void RegisteredUser::displayOrderDetails()
{
}
RegisteredUser::~RegisteredUser()
{
  for (int i = 0; i <= SIZE1; i++)
{
cout << pay[i] << "is deleted" << endl;
}
for (int i = 0; i <= SIZE1; i++)
{
  cout << pay[i] << "is deleted" << endl;
}
}
