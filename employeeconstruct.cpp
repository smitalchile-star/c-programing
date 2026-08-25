#include <iostream>
using namespace std;

class Employee
{
    int EmployeeID;
    string name;
    float salary;

public:
 
    Employee()
    {
        EmployeeID = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, float s)
    {
        EmployeeID = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e)
    {
        EmployeeID = e.EmployeeID;
        name = e.name;
        salary = e.salary;
    }

  
    void display()
    {
        cout << "Employee ID : " << EmployeeID << endl;
        cout << "Name        : " << name << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main()
{
    Employee e1;
    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;
    Employee e2(101, "Smital", 45000);
    e2.display();

    cout << "\nCopy Constructor:" << endl;
    Employee e3(e2);
    e3.display();

    return 0;
}
