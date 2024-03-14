#include <iostream>
using namespace std;
int main() {
	string s;
	cout<<"Enter the number :";
	cin>>s;
	cout<<"The least significant digit is "<<s[s.length()-1]<<endl;
	cout<<"The next least significant digit is "<<s[s.length()-2];
}
	