#include <iostream>
using namespace std;
int main() {
	int n,a[10],b[10],i,j,e=0;
	cout<<"Enter the no of elements:";
	cin>>n;
	cout<<"Enter array A"<<endl;
	for(i=0;i<n+1;i++){
		cout<<"Enter :";
		cin>>a[i];
	}
	cout<<"Enter array B"<<endl;
	for(i=0;i<n;i++){
		cout<<"Enter :";
		cin>>b[i];
	}
	for(i=0;i<n+1;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				e+=1;
			}
			else{
				continue;
			}
		}
		if(e==0){
			cout<<a[i]<<endl;
		}
		e=0;
	}
	
}