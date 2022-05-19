#pragma once
#include"GuestUser.h"   //header files
#include "Payment.h"
#include "Item.h"
#include<iostream>
#include<cstring>
#define SIZE1 2
#define SIZE2 2
class RegisteredUser : public GuestUser
{
  private:
  int nic;                        //data types
  char password[10];
  Payment* pay[SIZE1];
  Item* item[SIZE2];
  public:
  RegisteredUser();
  RegisteredUser(const char pName[50], const char
  pAddress[50], const char pEmail[30], int pContactNo, int pUserID, 
  const char pCountry[20], int pnic, const char ppassword[10], int
  pay1, int pay2, Item* pitem);
  void displayUserDetails();
  void displayOrderDetails();
  ~RegisteredUser();
};