// P1. Define a Person class like we did in the previous module. Only add name and age.


#include <iostream>
using namespace std;

class Person 
{
    // Create a constructor that takes a string as a parameter
    // and sets the name attribute to the value of the parameter
    public:
        Person(string name, int age) 
        {
            this->name = name;
            this->age = age;
        }
        void print_info() 
        {
            cout << "Hello,My name is: " << name << endl;
            cout << "My age is: " << age << endl;
        }
    private:
        string name;
        int age;
};

int main()
{
  Person p1("Prajwal G Anchan",22);
  p1.print_info();
  return 0;
}
