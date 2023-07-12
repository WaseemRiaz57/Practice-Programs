// A program to sort values of array
#include <iostream>
using namespace std;
void input(int arr[],int size){
	cout<<"\nEntet the value of arrays element"<<endl;
	for(int i=0;i<size;i++){
			cout<<"Enter value of index ["<<i<<"]"<<endl;
			cin>>arr[i];
	}
}
void sorting(int arr[],int size){
	int temp;
	cout<<"\nThis is Ascending order sorting"<<endl;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
			
		}
		cout<<arr[i]<<" ";
		
	}
	
}

int main(){
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int a[size];
	input(a,size);
	sorting(a,size);
	
	
}