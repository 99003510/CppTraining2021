#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Account
{
    private:
        int m_accNumber;
        std::string m_accName;
        double m_balance;

    public:
        Account();
        Account(int,std::string,double);
       // Account(std::string,std::string);
        Account(const Account&);
        void debit();
        void credit();
        double getBalance() const;
        void display() const;

};

#endif // ACCOUNT_H
