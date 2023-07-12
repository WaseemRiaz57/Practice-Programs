//11.	Enter a number and tell whether it is prime or not. 
#include <iostream>
using namespace std;
int main()
{
	int num,var=0;
	int count=1;
	cout<<"Enter any number to check whether it is prime or not"<<endl;
	cin>>num;
	while(count<=num){
		if(num%count==0){
			var++;
		}
		count++;
	}
	if(var>2){
		cout<<num<<" is a not prime number"<<endl;
	}else{
		cout<<num<<" is a prime number "<<endl;
	}
}
