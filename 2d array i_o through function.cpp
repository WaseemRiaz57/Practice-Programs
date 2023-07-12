#include <iostream>
using namespace std;
void input(int arr[2][2]){
//	int i,j;
	cout<<"Enter value"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
	
		}
		cout<<endl;	
	}

}
void output(int arr[2][2]){
	//int i,j;
	for(int i=0;i<2;i++){
		for( int j=0;j<2;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void addition(int arr[2][2],int brr[2][2]){
		cout<<"\nSum of two matrices"<<endl;

	for(int i=0;i<2;i++){
		for( int j=0;j<2;j++){
		
			cout<<arr[i][j]+brr[i][j]<<" ";
		
		}
		cout<<endl;
	}

	
}
void mul(int arr[2][2],int brr[2][2]){
	int mul[2][2];
	int k,sum=0;
	cout<<"\nmultiplication of matrices ; \n"<<endl;
		for(int i=0;i<2;i++){
		for( int j=0;j<2;j++){
			for(k=0;k<2;k++){
				sum=sum+arr[i][k]*brr[k][j];
			}
			
		mul[i][j]=sum;
		sum=0;
	     	
		}
		cout<<endl;
	}
	cout<<"\n Product of two matrice ; "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}

	
}
void transpose(int arr[][]){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<arr[j][i]<<" ";
			}
			cout<<endl;
		}
	}
int main()
{
	int a[2][2],b[2][2];
	cout<<"\nEnter input for a "<<endl;
	input(a);
	cout<<"\nEnter input for b"<<endl;
	input(b);
	cout<<"\nArray A is "<<endl;
	output(a);
	cout<<"\nArray B is "<<endl;
	output(b);
	addition(a,b);
	mul(a,b);
	cout<<"\nTranspose of matrix a "<<endl;
	transpose(a);
	cout<<"\nTranspose of matrix b "<<endl;
	transpose(b);
}