//7.	Enter a number and show its factors upto a specific number. (factors of 3 are : 3,6,9,12 …. )
#include <iostream>
using namespace std;
int main(){
	int num,s_num;
	
	cout<<"Enter any number"<<endl;
	cin>>num;
	int count=num;
	cout<<"Enter uper limit"<<endl;
	cin>>s_num;
	while(count<=s_num){
		cout<<count<<" ";
		count+=num;
	}
}
