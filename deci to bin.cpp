#include <iostream>
using namespace std;
int main() {
	int n,i=0,a,arr[10],j;
	cout<<"Enter the decimal number :";
	cin>>n;
	while(n>0){
		a=n%2;
		arr[i]=a;
		i+=1;
		n=n/2;
	}
	for(j=i-1;j>=0;j--){
		cout<<arr[j];
	}
}