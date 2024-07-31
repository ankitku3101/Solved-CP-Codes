#include<bits/stdc++.h>
using namespace std;

int main() {
	string string1, string2;
	cin>>string1;
	cin>>string2;
	for(int i=0; i<string2.size(); ++i){
		string1.erase(remove(string1.begin(), string1.end(), string2[i]), string1.end());
	}
	cout<<string1;
}