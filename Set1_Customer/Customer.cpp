#include "Customer.h"

Customer::Customer()
{
     custId = "SampleID";
    custName = "UserName";
    phone = "9090909090";
    balance = 0;
}
Customer::Customer(std::string Id,std::string name,std::string number,double bal)
{
    custId = Id;
    custName = name;
    phone = number;
    balance = bal;
}
Customer::Customer(const Customer&cus)
{
    custId = cus.custId;
    custName = cus.custName;
    phone = cus.phone;
    balance = cus.balance;
}
void Customer::makeCall(int nmins)
{

    float CALL_RATE = 0.5;
    balance -= nmins * CALL_RATE;
}
void Customer::recharge(double amount)
 { balance += amount; }
double Customer::getBalance() const
 { return balance; }
void Customer::display()
{
    cout<<"Customer ID: "<<custId<<endl;
    cout<<"Customer Name: "<<custName<<endl;
    cout<<"Phone no: "<<phone<<endl;
    cout<<"Balance: "<<balance<<endl;
}
