#include <iostream>
using namespace std;
int fib(int n){
	if(n<2){
		return n;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int num;
	cout<<"Enter the number of term"<<endl;
	cin>>num;
	fib(num);
	cout<<fib(num);
}