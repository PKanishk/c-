#include <iostream>
using namespace std;
int main() {
	int n,a[10],i,j,count=0,num;
	cout<<"Enter the no of elements:";
	cin>>n;
	cout<<"Enter the number :";
	cin>>num;
	for(i=0;i<n;i++){
		cout<<"Enter :";
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else{
				if(a[i]+a[j]==num){
					count+=1;
				}
			}
		}
	}
	if(count>=1){
		cout<<"YES!!!!!";
	}
	else{
		cout<<"NO!!!!!";
	}
	
}