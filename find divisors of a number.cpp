/*6.	Enter a number and display its divisors.  (e.g., divisors of 15 are: 1,3,5,15)*/
#include <iostream>
using namespace std;
int main()
{
 int num;
 int count=1;
 cout<<"Enter any number"<<endl;
 cin>>num;
while(count<=num){
     if(num%count==0){
          cout<<count<<" ";
     }
     count++;
}
}
