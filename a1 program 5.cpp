//5.	Enter two numbers and find smaller in them.
#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	printf("Enter first number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
	if(num1>num2){
		printf("%d is smaller number :",num2);
	}
	else
	{
		printf("%d is smaller number :",num1);
	}
}

