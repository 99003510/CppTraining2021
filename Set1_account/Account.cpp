#include "Account.h"

Account::Account()
{
  m_accNumber = 0;
  m_accName = "Enter Name";
  m_balance = 0;

}
Account::Account(int num, std::string name, double bal)
{
    m_accNumber = num;
    m_accName = name;
    m_balance = bal;
}
Account::Account(const Account&acc)
{
    m_accNumber = acc.m_accNumber;
    m_accName = acc.m_accName;
    m_balance = acc.m_balance;
}
void Account::credit()
{
    int amountCredited;
    cout<<"Enter the amount to be credited"<<endl;
    cin>>amountCredited;
    m_balance+=amountCredited;
}
void Account::debit()
{
    int amountDebited;
    cout<<"Enter the amount to be debited"<<endl;
    cin>>amountDebited;
    m_balance-=amountDebited;
}
double Account::getBalance() const
{
    return m_balance;
}
void Account::display() const
{
        cout<<"\n ----------------------";
        cout<<"\n Account number : "<<m_accNumber;
        cout<<"\n Name : "<<m_accName;
        cout<<"\n Balance : "<<m_balance;
}
