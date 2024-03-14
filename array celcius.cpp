#include <iostream>
using namespace std;
int main() {
	int n,a[10],i,j=0,b,f[10];
	cout<<"Enter the no of elements :";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		b=float((a[i]*(1.8))+32);
		f[j]=b;
		j+=1;
	}
	for(i=0;i<n;i++){
		cout<<float(f[i])<<" ";
	}
}