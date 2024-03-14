#include <iostream>
#include<cstring>
using namespace std;
int main() {
	string str,ls,us;
	int i,j,count=0;
	cout<<"enter the string :";
	getline(cin,str);
	char u[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char l[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for(i=0;i<str.length();i++){
		for(j=0;j<26;j++){
			if(str[i]==u[j]||str[i]==l[j]){
				us+=u[j];
				ls+=l[j];
			}
		}
	}
	cout<<"the reverse of the string is ";
	for(i=str.length()-1;i>=0;i--){
		cout<<str[i];
	}
	cout<<endl;
	cout<<"The upper case is "<<us<<endl;
	cout<<"The lower case is "<<ls;
}