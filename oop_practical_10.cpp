//Assignment No - 10
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering 

#include <iostream>
using namespace std;
class Test {
public:
 Test() { cout << "Constructor of Test " << endl; }
 ~Test() { cout << "Destructor of Test " << endl; }
};
int main()
{
	cout<<"Priyadarshani B-17"<<endl;
 try {
 Test t1;
 throw 10;
 }
 catch (int i) {
 cout << "Caught " << i << endl;
 }
}


