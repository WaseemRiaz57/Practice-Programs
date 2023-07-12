#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int binary,decimal,count=0;
	cout<<"Enter any binary number"<<endl;
	cin>>binary;
	while(binary>0)
	{
		int digit=binary%10;
		decimal=decimal+digit*pow(2,count);
		binary=binary/10;
		count++;
	}
	cout<<"Decimal number: "<<decimal;
}
