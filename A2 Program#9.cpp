/*9.	A triangle can be classi?ed based on the lengths of its sides as equilateral, isosceles or scalene. 
All 3 sides of an equilateral triangle have the same length. An isosceles triangle has two sides that are the 
same length, and a third side that is a different length. If all of the sides have different lengths, 
then the triangle is scalene. Write a program that reads the lengths of 3 sides of a triangle from the user. 
Display a message indicating the type of the triangle.*/
#include <iostream>
using namespace std;
int main(){
	int side1,side2,side3, equilateral,isosceles,scalene;
	while(side1!='e'){
	cout<<"Enter length of 1st side"<<endl;
	cin>>side1;
	cout<<"Enter length of 2nd side"<<endl;
	cin>>side2;
	cout<<"Enter length of 3rd side"<<endl;
	cin>>side3;
	if(side1==side2&&side2==side3){
		cout<<"This triangle is an equilateral triangle\n"<<endl;
	}else
	if(side1 == side2||side1 == side3||side2 == side3){
		cout<<"This triangle is isosceles triangle\n"<<endl;
	}else{
		cout<<"This triangle is scalene triangle\n"<<endl;
	}
}
}
