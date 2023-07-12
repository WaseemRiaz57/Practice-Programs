/*6.	Enter three sides of a triangle and check whether a triangle can be formed by the given value for 
the angles. (Sum of three sides angles is 180)*/
#include <iostream>
using namespace std;
int main(){
	int side1, side2, side3;
	while(side1!='e'){
	cout<<"Enter the length of 1st side"<<endl;
	cin>>side1;
	cout<<"Enter the length of 2nd side"<<endl;
	cin>>side2;
	cout<<"Enter the length of 3rd side"<<endl;
	cin>>side3;
	if(side1+side2+side3 == 180 && (side1!=0 && side2!=0 && side3!=0)){
		cout<<"Your triangle is Valid\n"<<endl;
	}else
	{
		cout<<"Your triangle is Invalid...\a\n"<<endl;
	}
}
}
