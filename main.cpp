#include <iostream>
#include "database.h"
using namespace std;
using namespace Records;

int main()
{
    Database myDB;
    Employee& emp1 = myDB.addEmployee("Greg");
    emp1.fire();
    Employee& emp2 = myDB.addEmployee("Marc");
    emp2.setSalary(100000);
    Employee& emp3 = myDB.addEmployee("John");
    emp3.setSalary(10000);
    emp3.promote();
    cout << "all employee: " << endl << endl;
    myDB.displayAll();
    cout << endl << "former employees: " << endl <<endl;
    myDB.displayFormer();

    return 0;
}
