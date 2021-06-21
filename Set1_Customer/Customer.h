#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

using namespace std;

class Customer
{
     private:
        std::string custId;
        std::string custName;
        std::string phone;
        double balance;
        //AccountType m_type;

    public:
        Customer();
        Customer(std::string,std::string,std::string,double);
        //Customer(std::string,std::string,std::string);
        Customer(const Customer&);
        void recharge(double); //recharge or billPay
        void makeCall(int);
        double getBalance() const;
        void display();

};

#endif // CUSTOMER_H
