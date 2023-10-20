#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;
int main(){
	
	int ch;
	int size1;
	cout<<"enter the size of first array: ";
	cin>>size1;
	int *arr1 = new int(size1);
	int arrnum1;
	int arrnum2;
	cout<<"enter the number inside the first array"<<endl;
	for(int i=0;i<size1;i++){
		cin>>arr1[i];
		ch=pow(10,i);
		arrnum1+=arr1[i]*ch;
		
	}
	cout<<arrnum1<<endl;
	int size2;
	cout<<"enter the size of array secound: ";
	cin>>size2;
	int *arr2 = new int(size2);
	cout<<"enter the the numbers inside the secound array"<<endl;
	
	for(int i=0;i<size2;i++){
	
		cin>>arr2[i];
		ch=pow(10,i);
		arrnum2+=arr2[i]*ch;
		
	}
	
	stringstream ss;
	string num;
	cout<<"arrnum1 "<<arrnum1<<" arrnum2 "<<arrnum2<<endl;
	int arrnum3= arrnum1+arrnum2;
	cout<<"is arrnum3 "<<arrnum3<<endl;
	ss<<arrnum3;
	ss>>num;
	cout<<"the arrnum3 is in string "<<num<<endl;
	cout<<"the arrnum3 in decmial "<<arrnum3<<endl;
	int size3=size1+size2;
	cout<<"is size3 "<<size3<<endl;
	int *sum= new int(size3);
	int lg=num.length();
	cout<<"the length "<<lg<<endl;
	for(int i=0;i>lg;lg--){
		sum[lg]=num[lg];
		cout<<"the sum "<<sum[lg]<<" at "<<lg<<endl;
	}
	
	
	
	return 0;
	}
