//Assignment No - 2
//Priyadarshani Kalbandhe
// SY B-17 Computer Engineering  

#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Bank
{
 int acno;
 char AccountHolderName[100], Account_Type[100];
 float bal;
public:
 Bank(int acc_no, char *name, char *acc_type, float Balance) 
 {
 acno = acc_no;
 strcpy(AccountHolderName, name);
 strcpy(Account_Type, acc_type);
 bal = Balance;
 }
 void deposit();
 void withdraw();
 void Show();
};
void Bank::deposit() 
{
 int DepositAmmount;
cout << " Enter Deposit Amount = " ;
 cin >> DepositAmmount;
 bal += DepositAmmount;
}
void Bank::withdraw() 
{
 int WithdrawAmmount;
 cout << " Enter Withdraw Amount = " ;
 cin >> WithdrawAmmount;
 if (WithdrawAmmount > bal)
 cout << " Cannot Withdraw Amount" ;
 bal -= WithdrawAmmount;
}
void Bank::Show() 
{
 cout << " ___________________" << endl;
 cout << " Accout No. : " << acno;
 cout << " Name : " << AccountHolderName;
 cout << " Account Type : " << Account_Type;
 cout << " Balance : " << bal;
}
int main()
{
 int acc_no;
 char name[100], acc_type[100];
 float Balance;
 cout << " ------------------Welcome to AXIS BANK------------------- " << endl;
 cout << "____________________" << endl;
 cout << " Please add account No: ";
 cin >> acc_no;
 cout << " Please Enter Account Holder Name : ";
 cin >> name;
 cout << " Mention Account Type : ";
 cin >> acc_type;
 cout << " Initial Balance : ";
 cin >> Balance;
 Bank b1(acc_no, name, acc_type, Balance); 
 b1.deposit(); 
 b1.withdraw(); 
 b1.Show(); 
 return 0;
}

