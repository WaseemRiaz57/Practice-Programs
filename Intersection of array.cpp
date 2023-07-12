// Intersection of arrays
#include <iostream>
using namespace std;
void input(int arr[],int size){
	for(int i=0;i<size;i++){
	
			cout<<"Enter the valude of index["<<i<<"]"<<endl;
			cin>>arr[i];
		
	}
}
void intersection(int arr[],int brr[],int size){
	int var=0;
	int num=0;
	 int inter[var];
	 
	cout<<"This is intersection of Matrix A & Matrix B"<<endl;
	for(int i=0;i<size;i++){// i=0-
		for(int j=0;j<size;j++){// j=0
				if(arr[i]==brr[j]){
			var++;
			inter[i]=arr[i];
			
		}
		cout<<inter[i]<<" ";
		}
	
	}

}
void output(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int size;
	int a[size],b[size];
	cout<<"Enter the size of arrays "<<endl;
	cin>>size;
	cout<<"Enter values Matrix A "<<endl;
	input(a,size);
	cout<<"Enter values Matrix B "<<endl;
	input(b,size);
	intersection(a,b,size);
	cout<<" \nThis Matrix A "<<endl;
	output(a,size);
	cout<<" \n This Matrix B "<<endl;
	output(b,size);
	
	
	
	
}