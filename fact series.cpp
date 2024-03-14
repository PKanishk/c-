#include <iostream>
using namespace std;
int main() {
	int n,sum=0,fact=1,i,j;
	cout<<"Enter the number :";
	cin>>n;
	for(i=1;i<n+1;i++){
		for(j=1;j<i+1;j++){
			fact*=j;
		}
		sum+=fact/i;
		fact=1;
	}
	cout<<"Sum of the series is "<<sum;
}