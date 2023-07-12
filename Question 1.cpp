//1.	Enter 2 numbers and find whether first number is divisor of second or not
#include <iostream>
using namespace std;

int main(){
	int first =0;
	int second =0;
	while(first!=101){
	printf("Enter first number\n");
	scanf("%d",&first);
    printf("Enter second number\n");
	scanf("%d",&second);
	if(second%first==0){
		printf("%d is divisor of %d:\n",first,second);
	}
	else{
		printf("%d is not divisor of %d :\n",first,second);
	}
	
	}
}

