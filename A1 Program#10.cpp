/*10.	A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, 
for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days 
your membership will be cancelled. Write a program to accept the number of days the member is late
 to return the book and display the fine or the appropriate message.*/
#include <iostream>
using namespace std;
int main()
{
	int x,days;
	while(days!=x){
	
	cout<<"Enter the numbers of days the book is late"<<endl;
	cin>>days;
	if(days<=5){
		cout<<"Your fine is 50 paise"<<endl;
	}else
	if(days>5 && days<=10){
		cout<<"Your fine is one rupee"<<endl;
	}else
	if(days>10 && days<=30){
		cout<<"Your fine is five rupees"<<endl;
	}else{
		cout<<"Your membership is cancelled"<<endl;
	}
}
}
