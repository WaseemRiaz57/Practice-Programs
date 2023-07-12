#include <stdio.h>
#include <string.h>
struct user{
	char name[15];
	float gpa;
	int marks;
};
int main()
{
	struct user s1,s2,s3;
	strcpy(s1.name,"Waseem");
	strcpy(s2.name,"ali");
	strcpy(s3.name,"hamza");

	s1.marks=34;
	s2.marks=45;
	s3.marks=23;
	s1.gpa=3.26;
	s2.gpa=2.3;
	s3.gpa=1.6;
	    printf("\nStudent 1 name %c\n",s1.name);
		printf("\nStudent 3 name %c\n",s3.name);
		printf("Student 2 name %c\n",s2.name);
	    printf("\n%c gpa is %f\n",s1.name,s1.gpa);

	
	
}