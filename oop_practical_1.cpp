//Assignment No - 1
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering 

#include<iostream>
#include<math.h>
using namespace std;
int area_circle(float r)
{
int area=3.14*r*r;
return area;
}
int area_triangle(float a, float b, float c){
float s=(a+b+c)/2;
float areat=sqrt(s*(s-a)* (s-b)*(s-c));
return areat;
}
int main(){
cout<<"Priyadarshani B-17"<<endl;
float a,b,c,r;
cout<<"Enter the three sides of triangle respectively:";
cin>>a>>b>>c;
cout<<"Enter the radius of the circle:";
cin>>r;
cout<<"Area of the Triangle is:"<<area_triangle(a,b,c)<<endl;
cout<<"Area of the Circle is :"<<area_circle(r);
return 0;
}

