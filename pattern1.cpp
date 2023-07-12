#include <iostream>
using namespace std;
int main(){
	int rows,col;
	cout<<"Enter number of rows you want"<<endl;
	cin>>rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}
