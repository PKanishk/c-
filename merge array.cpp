#include <iostream>
using namespace std;
int main() {
	int n1,n2,a[10],b[10],c[100],i,j=0;
	cout<<"Enter the no of elements in array A:";
	cin>>n1;
	cout<<"Enter the no of elements in array b:";
	cin>>n2;
	for(i=0;i<n1;i++){
		cout<<"Enter :";
		cin>>a[i];
	}
	for(i=0;i<n2;i++){
		cout<<"Enter :";
		cin>>b[i];
	}
	int n3=n1+n2;
	for(i=0;i<n1;i++){
		c[i]=a[i];
	}
	for(i=n1;i<n3;i++){
		c[i]=b[j];
		j+=1;
	}
	for(i=0;i<n3;i++){
		cout<<c[i];
	}
}