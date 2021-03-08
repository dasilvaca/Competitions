
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, out = 0; cin>>n;
	while(n--){
		int k = 0;
		for (int i = 0; i < 3; i++){
			int in;cin>>in;
			k+=in;
		}
		if (k>1) out++;
	}
	cout<<out;
}

