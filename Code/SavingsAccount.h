#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include "Bank_account.h"
#include <iostream>
class SavingsAccount : public AccountBase {
  public:
  SavingsAccount();
  SavingsAccount(std::string,std::string,double);
  SavingsAccount(std::string,std::string);
  void debit(double);
  void credit(double);
  void display() const;

};
#endif // SAVINGSACCOUNT_H_INCLUDED

