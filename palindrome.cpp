#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,i;
	string s,v;
	cout<<"Enter the value :";
	cin>>n;
	s=to_string(n);
	for(i=s.length()-1;i>=0;i--){
	v+=s[i];    
	}
	if(s==v){
	    cout<<"Palindrome";
	}
	else{
	    cout<<"not a palindrome";
	}
}
