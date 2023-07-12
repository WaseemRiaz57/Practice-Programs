//10.	Write a program to enter a value and calculate its factorial. (e.g., 5! = 5*4*3*2*1)
#include <iostream>
using namespace std;
int main(){
	int num;
	int fact=1;
	cout<<"Enter any number to find its factorial"<<endl;
	cin>>num;
	int count=num;
	while(count>=1){
		fact=fact*count;
		count--;
	}
	cout<<"The factorial of "<<num<<" is :"<<fact<<endl;
}
