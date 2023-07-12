/*7.	Any year is entered through the keyboard, write a program to determine whether the year is leap or not. 
(A leap year is divided by 4, and not divisible by 100, with exception of an year divisible by 400,
 e.g., 1700, 1800, 1900 are NOT leap , but 2000 is because of divisibility of 400)*/
#include <iostream>
using namespace std;
int main()
{
	int year;
	while(year!=2023){
	cout<<"Enter any year"<<endl;
	cin>>year;
	if(year%4==0&&(year%100!=0||year%400==0))
	{
	cout<<year<<" is leap year"<<endl;	
	}
	else
	cout<<year<<" is not leap year"<<endl;
}
}
