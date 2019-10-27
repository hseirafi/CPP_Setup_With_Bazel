
#include<iostream>
#include<gtest/gtest.h>
using namespace std;



struct BankAccount{
int balance;
BankAccount()
{

}

explicit BankAccount(const int balance):balance{balance}{}



};


TEST(AccountTest,BankAccountStartsEmpty){

    BankAccount account;
    EXPECT_EQ(0, account.balance);

}

int main(int argc, char* argv[]){

testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();

}

