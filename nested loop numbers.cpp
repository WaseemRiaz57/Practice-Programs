#include <iostream>
using namespace std;
int main()
{
	int n;
	int k=1;
	cout<<"Enter the numbers of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(k<10){
				cout<<"0"<<k<<" ";
			}else{
				cout<<k<<" ";
			}
			k++;
			
		}
		cout<<endl;
	}
}