//strings
#include <iostream>
using namespace std;
void count(char str[]){
	int i=0,count=0;
	while(str[i]!='\0'){
		i++;
		count++;
	}
	cout<<count;
}
int main(){
	char name[25];//= "Waseem Riaz";
	cout<<"Enter your name"<<endl;
	gets(name);
	cout<<name;
	cout<<"The total characters in your name are ";
	count(name);
}


