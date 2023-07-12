/*             **********        **********               *
 **            *********          *********              **
 ***           ********            ********             ***
 ****          *******              *******            ****
 *****         ******                ******           *****
 ******        *****                  *****          ******
 *******       ****                    ****         *******
 ********      ***                      ***        ********
 *********     **                        **       ********* 
 **********    *                          *      **********
*/
#include <iostream>
using namespace std;
int main(){
	int row;
	cout<<"Enter the numbers of rows"<<endl;
	cin>>row;
	for(int i=row;i>=1;i--){   //4
		for(int j=1;j<=row;j++){
			if(j<i){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
