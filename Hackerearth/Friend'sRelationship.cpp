#include<iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m;
	while(m--){
		cin>>n;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++){
				cout<<"*";
			}
			for(int k=n-i; k>0; k--){
				cout<<"#";
			}
			for(int k=n-i; k>0; k--){
				cout<<"#";
			}
			for(int j=1; j<=i; j++){
				cout<<"*";
			}
			cout<<'\n';
		}
		cout<<'\n';	
	}
}