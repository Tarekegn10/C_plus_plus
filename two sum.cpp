#include<iostream>
using namespace std;
int main(){
	int size;
	int sum;
	int target;
	cout<<"Enter size of or number arr: ";
	cin>>size;
	int *arr=new int(size);
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"enter the target: ";
	cin>>target;
	for(int i=0,j=1; i<size && j<size;i++,j++){
		
		sum=arr[i]+arr[j];
		if(target==sum){
			
			cout<<"are the numbers to the question "<<arr[i]<<" & "<<arr[j]<<endl;
			
			
		}
		
		
	}
	
	
	
	
	return 0;
	}
