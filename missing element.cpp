#include <iostream>
using namespace std;
int main() {
	int n,i,j,a[10],b[10],k=0;
	cout<<"Enter the no of elements :";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(j=a[0];j<=a[n-1];j++){
		b[k]=j;
		k+=1;
		}
	for(i=0;i<k;i++){
		if(b[i]!=a[i]){
		cout<<"The missing element is "<<b[i];
		break;}}}	