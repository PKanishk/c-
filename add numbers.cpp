#include <iostream>
using namespace std;
int main() {
	int n,sum=0,i;
	cout<<"Enter the number :";
	cin>>n;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"the sum is "<<sum;
}