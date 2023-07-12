//2.	Enter 2 numbers and find whether first is a factor of second or not.
#include <iostream>
using namespace std;

int main(){
 
	int first =0;
	int second =0;
	printf("Enter first number\n");
	scanf("%d",&first);
    printf("Enter second number\n");
	scanf("%d",&second);
	if(second%first==0)
	{
		printf("%d is factor of %d",first,second);
	}
	else
	{
		printf("%d is not factor of %d",first,second);
	}
}

