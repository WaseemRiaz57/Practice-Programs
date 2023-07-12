/*4.	Write a program to enter a number and display the name of the day using switch statement 
(e.g., 1 = Monday, 2 = Tuesday, 9 = Invalid number). If user enters an invalid number, then display message
to enter a valid number. */
#include <iostream>
using namespace std;
int main(){
	int day,e;
	     while(day!=e){
	
	cout<<"Enter day number"<<endl;
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		case 4:
			cout<<"Thusday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
		case 7:
			cout<<"Sunday"<<endl;
			break;
		default:
			cout<<"Please enter number between 1 and 7...\a"<<endl;
			break;
	}
}
}
