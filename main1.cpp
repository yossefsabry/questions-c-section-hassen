#include <iostream>

using namespace std;

class Person
{
public:
  int age;
  string name;
    Person (int x, string y)
  {
    age = x;
    name = y;
  }
};

int
main ()
{
  /* 
     Write a C++ program to create a class called "Person" with a name and
     age attribute. Create two instances of the "Person" class, set their
     attributes using the constructor, and print their name and age.
   */

  Person person1 (20, "yossef");
  Person person2 (10, "ahmed");

  cout << "name : " << person1.name << ", age : " << person1.age << endl;
  cout << "name : " << person2.name << ", age : " << person2.age << endl;

  return 0;
}
