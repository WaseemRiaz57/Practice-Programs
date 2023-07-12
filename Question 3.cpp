//3.	Enter a number and find whether its even or odd
#include <iostream>
using namespace std;

int main(){
	int number;
	while(number!=77){
	printf("Enter any number to check\n");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is an even number\n",number);
	}
	else
	{
		printf("%d is an odd number\n",number);
	}
}
}

