

/*
Write a C++ program to create a class called "Rectangle" with width and
height attributes. Calculate the area and perimeter of the rectangle
*/


#include <iostream>

using namespace std;	

class Rectangle
{
private:
  double width;
  double height;

public:
  // Constructor to initialize width and height
    Rectangle (double w, double h):width (w), height (h)
  {
  }

  // Member function to calculate the area
  double calculateArea ()
  {
    return width * height;
  }

  // Member function to calculate the perimeter
  double calculatePerimeter ()
  {
    return 2 * (width + height);
  }
};

int
main ()
{
  // Create an instance of the Rectangle class
  Rectangle myRectangle (5.0, 8.0);

  // Calculate and display the area
  cout << "Area: " << myRectangle.calculateArea () << endl;

  // Calculate and display the perimeter
  cout << "Perimeter: " << myRectangle.calculatePerimeter () << endl;

  return 0;
}
