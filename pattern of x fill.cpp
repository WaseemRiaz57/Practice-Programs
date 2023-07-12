#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the numbers of rows"<<endl;
	cin>>n;
	int s=n/2,e=n/2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=s||j>=e){
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		if(i<n/2){
			s--;
			e++;
		}else{
			s++;
			e--;
		}
		
		cout<<endl;
	}
}