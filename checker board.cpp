#include <iostream>
using namespace std;
int main(){
	int i,j,n,r;
	cout<<"Enter the number of star do you want to print"<<endl;
	cin>>n;
	cout<<"Enter the number of rows for stars"<<endl;
	cin>>r;
	cout<<"\n\n"<<endl;
	for(i=1;i<=r;i++){
		for(j=1;j<=n;j++){
			if(i%2==0){
				cout<<" *";
			}
			else{
				cout<<"# ";
			}	
			
		}
		cout<<endl;
	}
}
