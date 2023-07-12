//4.	Write a program to enter 2 numbers and print the larger in them.
#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	printf("Enter first number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
	if(num1>num2){
		printf("%d is greater number :",num1);
	}
	else
	{
		printf("%d is greater number :",num2);
	}
}

