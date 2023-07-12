#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=9;i++){
		for(int j=i;j<=9000;j=+10*j){
			cout<<j<<" ";
			}
			cout<<endl;
	}
}
