//6.	Enter 3 numbers and find largest and smallest in them
#include <iostream>
using namespace std;

int main(){
	int num1,num2,num3,largest,smallest;
	printf("Enter 1st number\n");
	scanf("%d",&num1);
	printf("Enter 2nd number\n");
	scanf("%d",&num2);
	printf("Enter 3rd number\n");
	scanf("%d",&num3);
	largest=num1;
	if(num2>largest){
		largest=num2;
	}
	if(num3>largest){
		largest=num3;
	}
		smallest=num1;
	if(num2<smallest){
		smallest=num2;
	}
	if(num3<smallest){
		smallest=num3;
	}
	printf("The largest number is %d :\n",largest);
	printf("The smallest number is %d :",smallest);
	}



