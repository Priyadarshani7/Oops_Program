//Assignment No - 9
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering 

#include <iostream>
#include <conio.h>
template <class T>
T findMin(T arr[],int n)
{
 int i;
 T min;
 min=arr[0];
 for(i=0;i<n;i++)
 {
 if(min > arr[i])
 min=arr[i];
 }
 return(min);
}
int main()
{
 clrscr();
 int iarr[5];
 char carr[5];
 double darr[5];
 cout <<"Integer Values"<<endl;
 
for(int i=0; i < 5; i++)
 {
 cout <<"Enter integer value " << i+1 << " : "<<endl;
 cin >> iarr[i];
 }
 cout <<"Character values "<<endl;
 for(int j=0; j < 5; j++)
 {
 cout << "Enter character value " << j+1 << " : "<<endl;
 cin >> carr[j];
 }
cout << "Decimal values "<<endl;
 for(int k=0; k < 5; k++)
 {
 cout << "Enter decimal value " << k+1 << " : "<<endl;
 cin >> darr[k];
 }
 cout<<"Generic Function to find Minimum from Array"<<endl;
 cout<<"Integer Minimum is : "<<findMin(iarr,5)<<endl;
 cout<<"Character Minimum is : "<<findMin(carr,5)<<endl;
 cout<<"Double Minimum is : "<<findMin(darr,5)<<endl;
 getch();
}




