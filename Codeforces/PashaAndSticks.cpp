#include<iostream>
using namespace std;

int main() {
	long int n;
	cin>>n;
	if(n%2)
		cout<<0;
	else
		cout<<(n/2-1)/2;
}