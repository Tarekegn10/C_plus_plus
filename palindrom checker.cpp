#include<iostream>
#include<sstream>
using namespace std;

string change_string(int a){
	string s;
	stringstream ss;
	ss<<a;
	ss>>s;
	
	return s;
	}
string checker(string s){
	int lg=s.length();
	string t;
	for(int i=0,j=lg-1;i<=lg && j>=0;i++,j--){
		
		if(s[i]==s[j]){
			
			
			t="TRUE";
		}
		else{
			
			t="FALSE";
		}
	}
	
	return t;
	}

int main(){
	
	int num;
	char c;
	do{
		
		cout<<"Enter number ";
		cin>>num;
		string s=change_string(num);
		string t=checker(s);
	
		if(t[0]=='T'){
			cout<<"The number "<<num<<" is palindromic number"<<endl;
		}
		else{
			cout<<"The number "<<num<<" is not palindromic number"<<endl;
		}
		cout<<"Enter Y or y to continue: ";
		cin>>c;
	
	}while(c=='Y' || c=='y');
	
	
	return 0;
	}
