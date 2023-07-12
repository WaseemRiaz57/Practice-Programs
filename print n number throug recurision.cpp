//1.	Write a program in C to print first n numbers using recursion.
#include <iostream>
using namespace std;
int printnum(int num, int a=1){
	if(a<=num){cout<<a<<" ";
	printnum(num+1);}
	
}
int main(){
	int num;
	cout<<" Enter the numbers"<<endl;
	cin>>num;
	printnum(num);
}