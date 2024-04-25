#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, n=0;
	cin>>x;
	string str;
	for(int i=1; i<=x; i++){
		cin>>str;
		if(str=="X++" || str=="++X"){
			n=n+1;
		} else if(str=="X--" || str=="--X") {
			n=n-1;
		}
	}
	cout<<n;	
}