#include <iostream>
using namespace std;
int main() {
	int m,n,i,j,count;
	cout<<"Enter the start range :";
	cin>>m;
	cout<<"Enter the end range :";
	cin>>n;
	if(m<=2){
		cout<<m<<" ";
	}
	for(i=m;i<=n;i++){
		count=0;
		for(j=2;j<=i;j++){
			if(i%j==0&&i!=j){
				count+=1;
				break;
			}
		}
		if(count==0&&i!=1){
			cout<<i<<" ";
		}
	}
}