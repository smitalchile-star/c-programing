#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;
    }
};

// Derived Class 1
class TeachingStaff : public Employee
{
private:
    string subject;
    string qualification;

public:
    void getTeachingStaff()
    {
        getEmployee();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingStaff()
    {
        cout << "\n--- Teaching Staff Details ---\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee
{
private:
    string designation;
    float workingHours;

public:
    void getNonTeachingStaff()
    {
        getEmployee();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingStaff()
    {
        cout << "\n--- Non-Teaching Staff Details ---\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << endl;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "===== TEACHING STAFF =====\n";
    t.getTeachingStaff();

    cout << "\n===== NON-TEACHING STAFF =====\n";
    n.getNonTeachingStaff();

    cout << "\n\n===== EMPLOYEE DETAILS =====\n";

    t.displayTeachingStaff();
    n.displayNonTeachingStaff();

    return 0;
}
