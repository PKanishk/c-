#include <iostream>
using namespace std;
int main() {
	int n,sum=0,i;
	cout<<"enter the number :";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n==sum){
		cout<<"Perfect number!!!!!!!!!!";
	}
	else{
		cout<<"Not Perfect number";
	}
}