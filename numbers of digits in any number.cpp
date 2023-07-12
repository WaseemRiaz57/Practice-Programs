/* 
how to find the numbers of figures in any number
*/
#include <iostream>
using namespace std;
int main()
{
	int num,n=0;
	cout<<"Enter any number"<<endl;
	cin>>num;
	int d=num;
	if(num==0){
		n=1;
	}else{
			while(d>0){
	
	
	d=d/10;
	n++;
	}
	
	}
cout<<"total digit(s) in"<<num<<"<<is/are"<<n<<endl;

}
