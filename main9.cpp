#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}

    // Member function to calculate salary based on performance
    void calculateSalary(double performanceFactor)
    {
        // Assuming a simple salary calculation based on performance factor
        salary *= performanceFactor;
    }

    // Member function to set salary
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }

    // Member function to get current salary
    double getSalary() const
    {
        return salary;
    }

    // Member function to display employee information
    void displayInfo() const
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    // Example usage
    Employee emp("John Doe", 12345, 50000.0);

    // Display initial employee information
    cout << "Initial Employee Information:" << endl;
    emp.displayInfo();

    // Calculate and set salary based on performance
    emp.calculateSalary(1.1); // Assuming a 10% salary increase

    // Display updated employee information
    cout << "\nUpdated Employee Information:" << endl;
    emp.displayInfo();

    return 0;
}
