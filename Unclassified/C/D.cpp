#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	fast_io;
	int t;
	cin>>t;
	for(int T=0;T<t;T++){
		long long input;
		cin>>input;
		long long sum = 0;
		for(int n =1; n<(input/2)+1;n++){
			if((input%n) == 0)
				sum = sum + n;
		}
		if(sum < input){
			cout<<("deficient\n");
		}
		else if (sum > input){
			cout<<("abundant\n");
		}
		else{
			cout<<("perfect\n");
		}
	}
	return 0;
}

