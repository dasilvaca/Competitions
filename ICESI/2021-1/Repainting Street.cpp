#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
	int n,k, colors[101] = {0}, min = 1e6;
	cin>>n>>k;
	int houses[n];
	for (int i = 0; i < n; i++) {
	    cin>>houses[i];
	    colors[houses[i]] = 1;
	}
	for (int i = 0; i < 101; i++){
	    int days = 0;
	    if(colors[i]) for(int j = 0; j< n; j++){
		if(houses[j] != i) {
		    days++;
		    j+=(k-1);
		} 
	    }
	    else days = 1e6;
	    if (days < min) min = days;
	}
	cout<<min<<'\n';
	//cout<< ((colors[max] - n) % k) ? ((max - n) / k) + 1: (max - n) / k;
	
    }
}
