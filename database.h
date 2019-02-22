#pragma once
#include <iostream>
#include <vector>
#include "employee.h"
namespace Records {
    const int kFirstEmployeeNumber = 1000;

    class Database
    {
    public:
        Database();
        Employee& addEmployee(const std::string& name);
        Employee& getEmployee(int employeeNumber);
        Employee& getEmployee(const std::string& name);

        void displayAll() const;
        void displayCurrent() const;
        void displayFormer() const;

    private:
        std::vector<Employee> mEmployees;
        int mNextEmployeeNumber;
    };
}
