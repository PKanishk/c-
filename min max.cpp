#include <iostream>
using namespace std;
int main() {
	int n,a[10],i,min,max,sum,diff;
	cout<<"Enter the no of elements :";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	sum=max+min;
	diff=max-min;
	cout<<"The max number is "<<max<<endl;
	cout<<"The min number is "<<min<<endl;
	cout<<"The sum is "<<sum<<endl;
	cout<<"The diff is "<<diff<<endl;
}