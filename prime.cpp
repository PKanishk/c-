#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value :";
	cin>>n;
    if (n == 2 || n == 3 || n == 5 || n == 7) {
        cout << "Prime number";
    } else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n > 1) {
        cout << "Prime number";
    } else {
        cout << "Not a Prime number";
    }
}
