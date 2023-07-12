#include <iostream>
using namespace std;
int main()
{
	int num,rem;
	cout<<"Enter any decimal num;"<<endl;
	cin>>num;
	while(num>0){
		rem=num%2;
		num=num/2;
		if(rem=0){
			rem=1;
		}else{
			rem=0;
		}
		cout<<rem<<" ";
	
}
}
