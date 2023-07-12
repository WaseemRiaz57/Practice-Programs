#include <iostream>
using namespace std;
int main(){
	int l=1,r;
	cout<<"enter the number of rows"<<endl;
	cin>>r;
	int u=r;
	for(int i=1;i<=r;i++){
		for(int j=l;j<=r;j++){
			if(j<=l){
				cout<<"*";
			}else{
				cout<<" ";
			}
		
		}
			l++;
			u--;
		cout<<endl;
	}
}