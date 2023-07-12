// input and out put of structure
#include <iostream>
#include <string>
using namespace std;
struct user{
	char name[25];
	int id;
	int marks;
	float gpa;
};

int main()
{
	user student[3];
	cout<<"Porgram start "<<endl;
	for(int i=0;i<3;i++){
		cout<<"Name of student "<<i<<endl;
	    //gets(student[i].name);
	     cin.ignore(); // Ignore the newline character before reading the name
        cin.getline(student[i].name, 25);
	    cout<<"ID of student "<<i<<endl;
		cin>> student[i].id;
		cout<<"Marks of student "<<i<<endl;
		cin>> student[i].marks;
		cout<<"Gpa of student "<<i<<endl;
		cin>> student[i].gpa;
	}
		for(int i=0;i<3;i++){
		cout<<student[i].name<<endl;
		cout<< student[i].id<<endl;
		cout<<student[i].marks<<endl;
		cout<< student[i].gpa<<endl;
	}
}