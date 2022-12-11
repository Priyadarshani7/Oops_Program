//Assignment No - 6
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering 


#include <iostream>
using namespace std;
class person
{
public:
 char name[400];
 int code;
 void input()
 {
 cout << "\n Enter the Details of Student for 'RK Group of Companies...'\n"<<endl;
 cout << "\nEnter the name of the student : "<<endl;
 cin >> name;
 cout << endl
<< "Enter the code of the student : "<<endl;
 cin >> code;
 }
 void display()
 {
 cout << endl
 << "Student name is : " << name;
 cout << endl
 << "Student code is : " << code;
 }
};
class account : virtual public person
{
public:
 float pay;
 void getpay()
 {
 cout << endl;
 cout<< "Enter the per anum payment for " << name << " in $: "<<endl;
 cin >> pay;
 }
 void display()
{
 cout << endl;
 cout<< "Payment for " << name << " in $ is: " << pay<<endl;
 }
};
class admin : virtual public person
{
public:
 int experience;
 void getexp()
 {
 cout << endl
 << "Enter the no.of years experience of " << name << " : ";
 cin >> experience;
 }
 void display()
 {
 cout << endl;
 cout<< "Experience of " << name << " is : " << experience << " years"<<endl;
 }
};
class master : public account, public admin
{
public:
 char n[200];
 void gettotal()
 {
 cout << endl;
 cout<< "Enter the previous company name of " << name << ": "<<endl;
 cin >> n;
 }
 void display()
 {
 cout << endl
 << "Previous Company name of " << name << " was : " << n<<endl;
 cout << endl
 << "\nNow Welcome to RK Group of Companies....\n"<<endl;
 }
};
int main()
{
 master m1;
 m1.input();
m1.getpay();
 m1.getexp();
 m1.gettotal();
 m1.person::display();
 m1.account::display();
 m1.admin::display();
 m1.display();
 return 0;
}
