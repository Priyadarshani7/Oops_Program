//Assignment No - 7
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering 

#include<iostream>
using namespace std;
class publication
{
char title[10];
float price;
public:
void read()
{
cout<<"\nEnter Title of the Publication :";
cin>>title;
cout<<"\nEnter the price of Publication :";
cin>>price;
}
void show()
{
cout<<"Title is :"<<title<<"\n";
cout<<"Price is :"<<price<<"\n";
}
};
class book :public publication
{
int page_count;
 
public :
void read()
{
cout<<"\nEnter the page count of Book :";
cin>> page_count;
}
void show()
{
cout<<"Page count of Book is :"<< page_count<<"\n";
}
};
class tape :public publication
{
float playing_time;
public :
void read()
{
cout<<"\nEnter playing time in minutes :";
cin>>playing_time;
}
void show()
{
cout<<"Playing time in minutes :"<<playing_time<<"\n";
}
};
int main()
{
publication *ptr;
publication p ;
p.read();
p.show();
 
book b;
ptr=&b ;
ptr->read();
ptr->show();
 
tape t;
ptr=&t ;
ptr->read();
ptr->show();
 
}

