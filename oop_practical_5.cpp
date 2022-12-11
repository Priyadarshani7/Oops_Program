//Assignment No - 5
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering 

#include <iostream>
 // no need to mention the data type for declaring the constructors
using namespace std;
class student
{
private:
 string name;
 int age;
public:
 //Default Constructor
 student()
 {
 cout << "\nDefault Constructor\nEnter the Name and age" << endl;
 cin >> name >> age;
 cout << "Name: " << name << "\nAge: " << age << endl;
 }
 //Parameterized Constructor
 student(string n, int a)
 {
 cout << "\nParameterized Constructor" << endl;
 name = n;
age = a;
 cout << "Name: " << name << "\nAge: " << age << endl;
 }
 
 //Destructor
 ~student()
 {
 cout << "\nDestructor Called" << endl;
 }
 //copy constructor
 student(const student &obj)
 {
 name = obj.name;
 age = obj.age;
 cout << "\nOutput by copy constructor\nName: " << name << "\nAge: " << 
age << endl;
 }
};
int main()
{
 cout << "priyadarshani.cs@ghecem.raisoni.net\n";
 student obj;
 student("Priyadarshani", 19);
student obj1(obj); //copy constructor called here
 return 0;
}

