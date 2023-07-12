#include <iostream>
using namespace std;
int main()
{
  int first=0,second=1;
  int n,next,count=1;
  cout<<"Enter the numbers of terms"<<endl;
  cin>>n;
  cout<<first<<" "<<second<<" ";
  while(next<100){
  	
  	next=first+second;
  	first=second;
  	second=next;
  	cout<<next<<" ";
  	count++;
  }
	}