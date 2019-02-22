#include <iostream>
#include <stdexcept>
#include "database.h"
using namespace std;
namespace Records {

    Database::Database() : mNextEmployeeNumber(kFirstEmployeeNumber)
    {
    }

    Employee& Database::addEmployee(const string& name)
    {
        Employee theEmployee;
        theEmployee.setName(name);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();
        mEmployees.push_back(theEmployee);

        return mEmployees[mEmployees.size() -1];
    }

    void Database::displayAll() const
    {
        for(const auto& employee : mEmployees){
            employee.display();
        }
    }

    void Database::displayCurrent() const
    {
        for(const auto& employee : mEmployees){
            if(employee.getIsHired())
                employee.display();
        }
    }

    void Database::displayFormer() const
    {
        for(const auto& employee : mEmployees){
            if(!employee.getIsHired())
                employee.display();
        }
    }

}



