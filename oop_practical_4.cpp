//Assignment No - 4
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering  

#include<iostream>
#include<iomanip>
using namespace std; 
class mat
{
 float **m;
 int rs,cs;
 public:
 mat(){}
 void creat(int r,int c);
 friend istream & operator >>(istream &,mat &);
 friend ostream & operator <<(ostream &,mat &);
 mat operator+(mat m2);
 mat operator-(mat m2);
 mat operator*(mat m2);
};
void mat::creat(int r,int c)
{
 rs=r;
 cs=c;
 m=new float *[r];
 for(int i=0;i<r;i++)
 m[i]=new float;
}
istream & operator>>(istream &din, mat &a)
{
 int r,c;
 r=a.rs;
 c=a.cs;
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 {
 din>>a.m[i][j];
 }
 }
 return (din);
}
ostream & operator<<(ostream &dout,mat &a)
{
 int r,c;
 r=a.rs;
 c=a.cs;
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 {
 dout<<setw(5)<<a.m[i][j];
 }
 dout<<"\n";
 }
return (dout);
}
mat mat::operator+(mat m2)
{
 mat mt;
 mt.creat(rs,cs);
 for(int i=0;i<rs;i++)
 {
 for(int j=0;j<cs;j++)
 {
 mt.m[i][j]=m[i][j]+m2.m[i][j];
 }
 }
 return mt;
}
mat mat::operator-(mat m2)
{
 mat mt;
 mt.creat(rs,cs);
 for(int i=0;i<rs;i++)
 {
 for(int j=0;j<cs;j++)
 {
 mt.m[i][j]=m[i][j]-m2.m[i][j];
 }
 }
 return mt;
}
mat mat::operator*(mat m2)
{
 mat mt;
 mt.creat(rs,m2.cs);
 for(int i=0;i<rs;i++)
 {
 for(int j=0;j<m2.cs;j++)
 {
 mt.m[i][j]=0;
 for(int k=0;k<m2.rs;k++)
 mt.m[i][j]+=m[i][k]*m2.m[k][j];
 }
 }
 return mt;
 }
int main()
{
 mat m1,m2,m3,m4,m5;
 int r1,c1,r2,c2;
 cout<<" Enter first matrix size : ";
 cin>>r1>>c1;
 m1.creat(r1,c1);
 cout<<"m1 = ";
 cin>>m1;
 cout<<" Enter second matrix size : ";
 cin>>r2>>c2;
 m2.creat(r2,c2);
 cout<<"m2 = ";
 cin>>m2;
 cout<<" m1:"<<endl;
 cout<<m1;
 cout<<" m2: "<<endl;
 cout<<m2;
 cout<<endl<<endl;
 if(r1==r2 && c1==c2)
 {
 m3.creat(r1,c1);
 m3=m1+m2;
 cout<<" m1 + m2: "<<endl;
 cout<<m3<<endl;
 m4.creat(r1,c1);
 m4=m1-m2;
 cout<<" m1 - m2:"<<endl;
 cout<<m4<<endl<<endl;
 }
 else
 cout<<" Summation & substraction are not possible n"<<endl;
if(c1==r2)
{
 m5=m1*m2;
 cout<<" m1 x m2: "<<endl;
 cout<<m5;
}
else;
cout<<" Multiplication is not possible "<<endl;
return 0;
}

