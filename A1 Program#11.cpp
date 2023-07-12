/*11.	An Insurance company follows following rules to calculate premium. 
(1) If a person's health is excellent and the person is between 25 and 35 years of age and lives in a city and
 is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs. 
(2) If a person satisfies all the above conditions except that the sex is female then the premium is 
Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh. 
(3) If a person's health is poor and the person is between 25 and 35 years of age and lives in a village 
and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. 
(4) In all other cases the person is not insured. 
Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount
 for which he/she can be insured
*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string health_condition, gender, location;
	int age;
	while(gender!="loop"){
	
	cout<<"Enter your health status (excellent/poor)"<<endl;
	cin>>health_condition;
	cout<<"Enter your gender"<<endl;
	cin>>gender;
	cout<<"Where do you live (city/village)"<<endl;
	cin>>location;
	cout<<"What is your age"<<endl;
	cin>>age;
	if(health_condition=="excellent" && gender=="male" && location=="city" && age>=25 && age<=35){
		cout<<"Your premium is Rs. 4 per thousand"<<endl;
		cout<<"Your policy amount cannot exceed Rs. 2 lakhs.\n"<<endl;
	}else
	if(health_condition=="excellent" && gender=="female" && location=="city" && age>=25 && age<=35){
		cout<<"Your premium is Rs. 3 per thousand"<<endl;
		cout<<"Your policy amount cannot exceed Rs. 1 lakhs.\n"<<endl;
	}else
	if(health_condition=="poor" && gender=="male" && location=="village" && age>=25 && age<=35){
		cout<<"Your premium is Rs. 6 per thousand"<<endl;
		cout<<"Your policy amount cannot exceed Rs. 10,000.\n"<<endl;
	}else
	{
		cout<<"You are not insured.\n"<<endl;
	}
}
}
