/* 
8.	Write a program to print a pyramid

     *
    ***
   *****
  *******
 *********
 */
 #include <iostream>
 using namespace std;
 int main(){
 	int row;
 	cout<<"Enter numbers of rows"<<endl;
 	cin>>row;
 	for(int i=1;i<=row;i++){
 		for(int j=1;j<=row-i;j++){
 		cout<<" ";
		 }
		 for(int k=1;k<=i+(i-1);k++){
		 	cout<<k;
		 }
		 cout<<endl;
	 }
 }

