#include<iostream>
using namespace std;
int main(){
	
	int arrsize1;
	cout<<"enter arr 1 size: ";
	cin>>arrsize1;
	int arrsize2;
	cout<<"enter arr 2 size: ";
	cin>>arrsize2;
	int arrsize3= arrsize1+arrsize2;
	int * arr1 = new int(arrsize1);
	int * arr2 = new int(arrsize2);
	int * arr3 = new int(arrsize3);
	cout<<"inside arr1"<<endl;
	for(int i=0;i<arrsize1;i++){
		
		cin>>arr1[i];
	}
	cout<<"inside arr2"<<endl;
	for(int j=0;j<arrsize2;j++){
	
		cin>>arr2[j];
	}
	int sarr2=0;
	cout<<"inside arr3"<<endl;
	for(int i=0;i<arrsize3;i++){
		if(i<arrsize1){
			
			arr3[i]=arr1[i];
			
		}
		else{
			
			if(sarr2<arrsize2){
				
				arr3[i]=arr2[sarr2];

				
			}
			sarr2++;
			
		}
		cout<<"arr3 value at "<<i<<" is "<<arr3[i]<<endl;
	}
	
	
	return 0;
	}

