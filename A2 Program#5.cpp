/*5.	Write a C program to check whether a character is an alphabet, digit or special character.
 (Use Ascii value)*/
#include <iostream>
using namespace std;
int main(){
	char ch;
	while(ch!='e'){
	cout<<"Enter any character\n"<<endl;
	cin>>ch;
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
		cout<<ch<<" is an alphbet\n"<<endl;
	}else
	if(ch>=48 && ch<=57)
	{
		cout<<ch<<" is a digit\n"<<endl;
	}else
	{
		cout<<ch<<" is a special character"<<endl;
	}
}
}
