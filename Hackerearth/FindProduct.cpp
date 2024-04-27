#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int a[n], ans=1, m=pow(10,9);
	for(int i=0; i<n; i++){
		cin>>a[i];
		ans = (ans*a[i]) % (m+7);
	}
	cout<<ans;
}