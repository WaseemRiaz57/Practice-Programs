/*
2.	Write a program to print empty diamond
 

*/
#include <iostream>
using namespace std;
int main(){
	int r,c;
	cout<<"Enter numbers of rows"<<endl;
	cin>>r;
	cout<<"Enter numbers of coloumns"<<endl;
	cin>>c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(i+j==5||i+j==11||i==5&&j==2||i==6&&j==3||i==2&&j==5||i==3&&j==6){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
	   cout<<endl;
	}
}
