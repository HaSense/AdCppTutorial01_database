#pragma once
#include <string>
namespace Records {

    const int kDefaultStartingSalary = 30000;

    class Employee
    {
    public:
        Employee();
        void promote(int raseAmount = 1000);
        void demote(int demeritAmount = 1000);
        void hire();
        void fire();
        void display() const;

        //Getter,Setter
        void setName(const std::string& name);
        const std::string& getName() const;

        void setEmployeeNumber(int employeeNumber);
        int getEmployeeNumber() const;

        void setSalary(int newSalary);
        int getSalary() const;

        bool getIsHired() const;

    private:
        std::string mName;
        int mEmployeeNumber;
        int mSalary;
        bool mHired;
    };
}

