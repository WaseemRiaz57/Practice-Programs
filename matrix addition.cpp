#include <iostream>
using namespace std;
int main(){
	int r,c,A[3][3],B[3][3],sum[3][3];
	cout<<"Enter the elements of first matrix"<<endl;;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cin>>A[r][c];
		}
		cout<<endl;
	}
		cout<<"Enter the elements of Second matrix"<<endl;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cin>>B[r][c];
		}
		cout<<endl;
	}
	cout<<"Sum of these two matric is; "<<endl;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			sum[r][c]=A[r][c]+B[r][c];
			cout<<sum[r][c]<<" ";
		}
		cout<<endl;
	}
}