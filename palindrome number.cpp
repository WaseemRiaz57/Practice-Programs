/*1.	Write a program to enter a number of any length, and find whether its palindrome or not.
e.g., 12321 is palindrome. 12344321 is palindrome 
*/
#include <iostream>
using namespace std;
int main()
{
	int num,d,n=0;
	cout<<"Enter any number"<<endl;
	cin>>num;
	while(num>0){
		d=num%10;
		num=num/10;
		cout<<d<<endl;
		n++;
	}
	cout<<"The numbers of digit(s) are "<<n<<endl;
}
