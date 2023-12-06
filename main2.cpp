#include <iostream>

using namespace std;

class Dog
{
public:
  bool breed;
  string name;
    Dog (bool x, string y)
  {
    breed = x;
    name = y;
  }
  void setter (bool x, string y)
  {
    breed = x;
    name = y;
  }
};

int
main ()
{
  /* 
     Write a C++ program to create a class called "Dog" with a name and
     breed attribute. Create two instances of the "Dog" class, set their attributes
     using the constructor and modify the attributes using the setter methods
     and print the updated values.
   */

  Dog dog1 (true, "max");
  Dog dog2 (false, "ben");

  cout << "breed : " << dog1.breed << ", name : " << dog1.name << endl;
  cout << "breed : " << dog2.breed << ", name : " << dog2.name << endl;

  dog1.setter (false, "jack");

  cout << "breed : " << dog1.breed << ", name : " << dog1.name << endl;
  cout << "breed : " << dog2.breed << ", name : " << dog2.name << endl;

  return 0;
}
