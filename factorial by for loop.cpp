//factorial by for loop
#include <iostream>
using namespace std;

int main(){
int num;
double fact=0;
cout<<"Enter any number to find its faactorial"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
	fact=fact*i;
	
}
cout<<num<<"!"<<" = "<<fact<<endl;
}

