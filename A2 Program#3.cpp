/*3.	Write a program to enter a number and display the name of month using switch statement.
 If user enters an invalid number, then display message to enter a valid number. */
#include <iostream>
using namespace std;
int main(){
	int month,n;
	while(month!=n){
	
	cout<<"Enter month number"<<endl;
	cin>>month;
	switch(month)
	{
		case 1:
			cout<<"January"<<endl;
			break;
		case 2:
			cout<<"February"<<endl;
			break;
		case 3:
			cout<<"March"<<endl;
			break;
		case 4:
			cout<<"April"<<endl;
			break;
		case 5:
			cout<<"May"<<endl;
			break;
		case 6:
			cout<<"June"<<endl;
			break;
		case 7:
			cout<<"July"<<endl;
			break;
		case 8:
			cout<<"August"<<endl;
			break;
		case 9:
			cout<<"September"<<endl;
			break;
		case 10:
			cout<<"October"<<endl;
			break;
		case 11:
			cout<<"November"<<endl;
			break;
		case 12:
			cout<<"December"<<endl;
			break;
		default:
			cout<<"Please enter number between 1 and 12...\a"<<endl;
			break;
	}
}
}
