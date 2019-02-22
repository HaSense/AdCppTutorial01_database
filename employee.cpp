#include <iostream>
#include "employee.h"
using namespace std;

namespace Records {
    Employee::Employee():
        mName(""),
        mEmployeeNumber(-1),
        mSalary(kDefaultStartingSalary),
        mHired(false)
    {
    }

    void Employee::promote(int raseAmount){
        setSalary(getSalary() + raseAmount);
    }
    void Employee::demote(int demeritAmount){
        setSalary(getSalary() + demeritAmount);
    }
    void Employee::hire(){
        mHired = true;
    }
    void Employee::fire(){
        mHired = false;
    }
    void Employee::display() const{
        cout << "Employee: " << getName() << endl;
        cout << "-----------" << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Salary: $" << getSalary() << endl;
        cout << endl;
    }
    //Getter, Setter
    void Employee::setName(const string& name)
    {
        mName = name;
    }
    const string& Employee::getName() const
    {
        return mName;
    }
    void Employee::setSalary(int newSalary){
        mSalary = newSalary;
    }
    int Employee::getSalary() const
    {
        return mSalary;
    }
    void Employee::setEmployeeNumber(int newEmployeeNumber)
    {
        mEmployeeNumber = newEmployeeNumber;
    }
    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }
    bool Employee::getIsHired() const
    {
        return mHired;
    }
}
