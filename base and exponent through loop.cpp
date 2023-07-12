/*9.	Two numbers are entered through the keyboard. Write a program 
to find the value of one number raised to the power of another.*/
#include <iostream>
using namespace std;

int main() {
    int base, exponent,result=1;
    int count=1;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
   while(count<=exponent){
   	result=result*base;
   	count++;	
   }
   cout<<result<<endl;
}

