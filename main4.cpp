#include <iostream>
#include <cmath>

/*
Write a C++ program to create a class called "Circle" with a radius
attribute. You can access and modify this attribute. Calculate the area and
circumference of the circle.
*/ 
  
using namespace std;

 
 
class Circle 
{

 
private:
double radius;

 
 
public:
    // Constructor to initialize radius
  Circle (double r):radius (r) 
  {
  
} 
 
    // Getter function to access the radius
  double getRadius () const 
  {
    

return radius;
  

}
   


    // Setter function to modify the radius
  void setRadius (double r) 
  {
    
 
radius = r;
  
 
} 
 
    // Member function to calculate the area
  double calculateArea () const 
  {
    

return M_PI * radius * radius;	// 3.14 * radius ^ 2
  }
   


    // Member function to calculate the circumference
  double calculateCircumference () const 
  {
    

return 2 * M_PI * radius;	// 2 * 3.14 * radius
  }
 

};

 
 
int 
main () 
{
  
 
    // Create an instance of the Circle class with a radius of 3.5
    Circle myCircle (3.5);
  
 
 
    // Access and display the initial radius
    cout << "Initial Radius: " << myCircle.getRadius () << endl;
  
 
 
    // Modify the radius
    myCircle.setRadius (5.0);
  
 
 
    // Access and display the modified radius
    cout << "Modified Radius: " << myCircle.getRadius () << endl;
  
 
 
    // Calculate and display the area
    cout << "Area: " << myCircle.calculateArea () << endl;
  
 
 
    // Calculate and display the circumference
    cout << "Circumference: " << myCircle.calculateCircumference () << endl;
  
 
 
return 0;

 
}


 
 
