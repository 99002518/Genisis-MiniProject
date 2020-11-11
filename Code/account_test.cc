#include "CreditAccount.h"
#include "SavingsAccount.h"
#include <gtest/gtest.h>
namespace
{
TEST(CreditAccount,CreditAccountTests)
{
AccountBase *A;
CreditAccount c1("100","Raj",1000);
A=&c1;
A->credit(1000);
A->debit(10000);
EXPECT_EQ(10000,A->getBalance());
}

TEST(SavingsAccount,SavingsAccountTests)
{
AccountBase *A;
SavingsAccount c1("100","Raj",1000);
A=&c1;
A->debit(1000);
A->credit(10000);
EXPECT_EQ(10000,A->getBalance());
EXPECT_STREQ("100",A->getNumber().c_str());
EXPECT_STREQ("Raj",A->getName().c_str());
}
}




