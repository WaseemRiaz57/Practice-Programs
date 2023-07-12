/*8.	If the three sides of a triangle are entered through the keyboard,
 write a program to check whether the triangle is valid or not. 
 The triangle is valid if the sum of two sides is greater than the largest of the three sides.*/
#include <iostream>
using namespace std;

int main(){
    int side1, side2, side3, largest, sum;
    while(side1!=20){
    cout << "Enter length of 1st side" << endl;
    cin >> side1;
    cout << "Enter length of 2nd side" << endl;
    cin >> side2;
    cout << "Enter length of 3rd side" << endl;
    cin >> side3;
    largest = side1;
    if(side2 > largest) {
        largest = side2;	
    } 
    if(side3 > largest) {
        largest = side3;
    }
    
    if(largest == side2) {
        sum = side1 + side3;
    } else if(largest == side3) {
        sum = side1 + side2;
    } else {
        sum = side2 + side3;
    }
    cout << "The largest side is: " << largest << endl;
    cout << "The sum of the other two sides is: " << sum << endl;
    if(sum > largest) {
        cout << "Your triangle is valid." << endl;
    } else {
        cout << "Your triangle is invalid...\a" << endl;
    }
 }
}


