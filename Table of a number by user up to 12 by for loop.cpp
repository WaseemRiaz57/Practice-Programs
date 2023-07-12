//Table of a number by user up to 12 by for loop
#include <iostream>
using namespace std;

int main(){
long double num, x,y;
cout<<"Enter the number"<<endl;
cin>>num;
cout<<"Enter the number up to "<<endl;
cin>>y;
for(x=1;x<=y;x++){
	cout<<num<<" X "<<x<<" = "<<num*x<<endl;
}
}
