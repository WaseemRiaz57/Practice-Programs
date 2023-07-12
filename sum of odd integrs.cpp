//sum of odd integers
#include <iostream>
using namespace std;
int main(){
	int sum=0;
	for(int i=1;i<=99;i= i+2){
		
		sum=sum+i;
		if(i<99){
				cout<<i<<" + ";
			
		}
		else{
		cout<<i<<" = ";
		}
		
	}
	cout<<sum<<endl;
}
