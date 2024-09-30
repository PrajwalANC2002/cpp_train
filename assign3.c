// P3. Make the attributes private and see if you can still access them from outside the class.
//if the attrbute are made private we cannot acess it outside the class
#include <iostream>
using namespace std;

class Person {
    // Create a constructor that takes a string as a parameter and sets the name attribute to the value of the parameter
    private:
        Person(string name, int age) 
        {
            this->name = name;
            this->age = age;
        }
        void print_info() 
        {
            cout << "Hello,My name is: " << name << endl;
            cout <<"My age is: " << age << endl;
        }
    private:
        string name;
        int age;
};

int main()
{
  Person p1("Dasai",27);
  Person p2("Kunikida",28);
  p1.print_info();
  p2.print_info();
  return 0;
}
