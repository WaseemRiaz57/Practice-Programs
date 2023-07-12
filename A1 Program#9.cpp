/*9.	In a company, worker efficiency is determined on the basis of the time required for a worker to complete
a particular job. If the time taken by the worker is between 2 - 3 hours, then the  worker is said to be highly
efficient. If the time required by  the worker is between 3 - 4 hours, then the worker is ordered  to improve
speed. If the time taken is between 4 - 5 hours, the  worker is given training to improve his speed, and if
the time  taken by the worker is more than 5 hours, then the worker has  to leave the company. If the time
taken by the worker is input  through the keyboard, find the efficiency of the worker.*/
#include <iostream>
using namespace std;
int main(){
	int x;
	float time_require;
	while(time_require!=x){
			cout<<"How much time(in hours) you require to complete a project :"<<endl;
	cin>>time_require;
	if(time_require >=2 && time_require<=3){
		cout<<"You are highly efficient"<<endl;
	}else
	if(time_require>=3 && time_require<=4){
		cout<<"Please improve your speed"<<endl;
	}else
	if(time_require >=4 && time_require <=5){
		cout<<("Join training to improve your speed")<<endl;
	}else
	if(time_require > 5){
		cout<<"Its time to leave this company"<<endl;
	}
	else{
		cout<<"Enter valid numbers of hours"<<endl;
	}
	}

	
}
