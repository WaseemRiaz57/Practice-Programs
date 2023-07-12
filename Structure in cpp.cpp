#include <iostream>
using namespace std; 
 struct employee{
 	char name[20];
 	int id;
 	char fav;
 	float sallary;
 };
int main()
{
	employee user1,user2,user3;
    strcpy(user1.name, "Waseem");
	strcpy(user2.name, "Hamza");
	strcpy(user3.name, "Ali");
	user1.id = 1;
	user2.id =2;
	user3.id= 3;
	user1.sallary = 79456.5;
	user2.sallary = 335.5;
	user3.sallary = 25446.36;
	user1.fav = 'w';
	user3.fav = 'a';
	user2.fav = 'z';
	cout<<" Name and ID of user1 is\n "<<user1.name<<" "<<user1.id<<endl;
	cout<<" \nFav character of user1 is "<<user1.fav<<endl;
	cout<<"\nAll detail of user3 "<<user3.id<<" "<<user3.sallary<<" "<<user3.fav<<endl;
	
}