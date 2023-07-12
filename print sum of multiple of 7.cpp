//8.	Write a program to calculate and print the sum of all multiples of 7 from 1 to 100.
#include <iostream>
using namespace std;
int main()
{
int count=7,sum;
while(count<=100){
	cout<<count<<" ";
	count+=7;
	sum=sum+count;
}
cout<<"\n\nThe sum of all these multiple is : "<<sum<<endl;
}
