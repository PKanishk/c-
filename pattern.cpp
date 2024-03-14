#include <iostream>
using namespace std;
int main() {
	int n,a=2,b,i,j;
	cout<<"Enter the no of rows :";
	cin>>n;
	cout<<2<<endl;
	for(i=1;i<n;i++){
		b=a*a;
		for(j=0;j<i+1;j++){
			cout<<b<<"		";
		}
		a=b;
		cout<<endl;
	}
}