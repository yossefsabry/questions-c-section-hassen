#include <iostream>
#include <string>

/*
Write a C++ program to create a class called "Employee" with a name, job
title, and salary attributes, and methods to calculate and update salary
*/ 
  
using namespace std;

class Employee 
{

private:
string name;
 
string jobTitle;
 
double salary;

 
public:
    // Constructor to initialize name, job title, and salary
  Employee (string empName, string empJobTitle,
	      
double empSalary) 
:name (empName), jobTitle (empJobTitle),
    
salary (empSalary) 
  {
 
} 
   // Getter functions
    string getName () 
  {
  
return name;
  
 
}
  
 
string getJobTitle () 
  {
    
return jobTitle;
 
}
  
 
 
double getSalary () 
  {
    
return salary;
  
}
  
    // Setter function to update salary
  void updateSalary (double newSalary) 
  {
   
salary = newSalary;
  
} 
 
    // Member function to calculate bonus based on a percentage
  double calculateBonus (double percentage) const 
  {
    
return salary * (percentage / 100.0);
  
}

};

int 
main () 
{
    // Create an instance of the Employee class
    Employee emp ("John Doe", "Software Engineer", 60000.0);

    // Display employee information
    cout << "Employee Information:" << endl;
 
cout << "Name: " << emp.getName () << endl;
  
 
cout << "Job Title: " << emp.getJobTitle () << endl;
  
cout << "Salary: $" << emp.getSalary () << endl;
    // Update the salary
    emp.updateSalary (65000.0);
  
cout << "\nUpdated Salary: $" << emp.getSalary () << endl;
  
    // Calculate and display a bonus (10% of the salary)
  double bonus = emp.calculateBonus (10.0);
 
cout << "Bonus: $" << bonus << endl;
 
return 0;

}


 
 
 
 
 
 
