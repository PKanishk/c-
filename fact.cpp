#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,i,a=1;
	cout<<"Enter the value :";
	cin>>n;
    for(i=n;i>0;i--){
        a*=i;
    }
    cout<<"Factorial is "<<a;
}
