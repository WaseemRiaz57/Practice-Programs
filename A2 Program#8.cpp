/*8.	Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
(Menu means that a message should be displayed like Enter 1 for circle, 2 for triangle, 3 for rectangle etc.)*/
#include <stdio.h>
int main(){
	float length,width,height,radius,base,area;
	int selection;
	int const PI=3.14159;
	while(selection!=101){
	printf("Select a number from following choices\n");
	printf("1: Triangle\n2: Rectangle\n3: Square\n4: Circle\n");
	scanf("%d",&selection);
	switch(selection)
	{
		case 1:
			printf("Enter value for base of triangle\n");
			scanf("%f",&base);
			printf("Enter value for height of triangle\n");
			scanf("%f",&height);
			area= 0.5*base*height;
			printf("The area of triangle is : %f\n\n",area);
			break;
		case 2:
			printf("Enter value for length of ractangle\n\n");
			scanf("%f",&length);
			printf("Enter value for width of ractangle\n");
			scanf("%f",&width);
			area= length*width;
			printf("The area of ractangle is : %f\n\n",area);
			break;
		case 3:
			printf("Enter value for length of square\n");
			scanf("%f",&length);
			area= length*length;
			printf("The area of square is : %f\n\n",area);
			break;
		case 4:
			printf("Enter value for radius of circle\n");
			scanf("%f",&radius);
			area= PI*radius*radius;
			printf("The area of circle is : %f\n\n",area);
			break;
		default:
			printf("Enter valid number :\n\n\a");
			break;
	}
}
}
