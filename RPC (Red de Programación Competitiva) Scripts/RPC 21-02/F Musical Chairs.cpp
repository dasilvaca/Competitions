#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    vector<pair<int, int>> calls;
    cin>>n;
    for (int i = 0; i < n; i ++){
	int in;
	cin>>in;
	calls.push_back({i + 1, in});
    }
    int k = 0;
    while (n > 1){
	k = (calls[k].second + 1) % n;
	calls.erase(calls.begin()+k);
	k = (k+1) % n;
	n--;
    }
    cout<<calls[0].first<<endl;
}
