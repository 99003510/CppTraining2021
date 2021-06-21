#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class IEmployee   // Abstract Base Class
{
    public:

        virtual void payroll()=0 ;
        virtual void appraisal()=0;       // pure virtual function
};

class Employee: public IEmployee
{
    string m_empid ;
    string m_name;
    double m_salary;
    int m_exp;
    public:

        void payroll(void)
        {
            cout << "The payroll is 20000"<<endl; ;
        }
        void appraisal(void)
        {
            cout<<"The appraisal is 4000 points "<<endl;
        }
        void display()
        {
            cout<<"The employee name "<<m_name<<endl;
            cout<<"The employee salary "<<m_salary<<endl;
            cout<<"The employee experience "<<m_exp<<endl;
            cout<<"The employee id "<<m_empid<<endl;
};
class Engineer : public Employee // Second Derived class
{
                private:
                        int m_projectCode;
                public:
                           Engineer(string id, string name, double salary, int exp,int code)
                        {
                                m_empid=id;
                               m_name=name;
                               m_salary=salary;
                               m_exp=exp;
                               m_projectCode=code;
                        }
                        void payroll(void)
                        {
                                cout << "The payroll is 80000"<<endl; ;
                        }
	      void appraisal(void)
	      {
                               cout<<"The appraisal is 5000 points "<<endl;
                        }
                       void display()
                      {
                       cout<<"The Engineer name "<<m_name<<endl;
                       cout<<"The Engineer  salary "<<m_salary<<endl;
                       cout<<"The Engineer experience "<<m_exp<<endl;
                       cout<<"The engineer id "<<m_empid<<endl;

};
class Manager : public Employee // Second Derived class
{
                private:
                        int m_projectCode;
                        int m_reportees;
                public:
                           Engineer(string id, string name, double salary, int exp,int code,int reportees)
                        {
                                m_empid=id;
                               m_name=name;
                               m_salary=salary;
                               m_exp=exp;
                               m_projectCode=code;
                               m_reportees=reportees;
                        }
                        void payroll(void)
                        {
                                cout << "The payroll is 1230000"<<endl; ;
                        }
	      void appraisal(void)
	      {
                               cout<<"The appraisal is 3000 points "<<endl;
                        }
                       void display()
                      {
                       cout<<"The Manager name "<<m_name<<endl;
                       cout<<"The Manager  salary "<<m_salary<<endl;
                       cout<<"The Manager experience "<<m_exp<<endl;
                       cout<<"The Manager id "<<m_empid<<endl;
                      cout<<"The Manager project code and reportees"<<m_projectCode<<" "<<m_reportees<<endl;

};

#endif // EMPLOYEE_H
