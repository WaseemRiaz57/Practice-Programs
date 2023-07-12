/*4.	Print of pattern of 0's surrounded by stars
  
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
			if(i%2==0&&j%2==0){
				cout<<"0";
			}
			else{
				cout<<"*";
			}
		}
	   cout<<endl;
	}
}
