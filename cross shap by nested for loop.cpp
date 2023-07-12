/*3.	Print the following for n lines 
 
 
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
			if(i==j||j-i==j-i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
	   cout<<endl;
	}
}
