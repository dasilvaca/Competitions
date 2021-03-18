#include<bits/stdc++.h>

#define pb push_back

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	vector <int> mex, meximized;
	while(n--){
	    int k; cin>>k;
	    mex.pb(k);
	}
	sort(mex.begin(), mex.end());
	for(int i = 0; mex.size();){
	    if (mex.size() > 1){
		if (mex[i] == mex[i+1]) {
		    i = (i + 1) % mex.size();
		    continue;
		}
		else {
		    meximized.pb(mex[i]);
		    cout<< mex[i]<<' ';
		    mex.erase(mex.begin() + i);
		    i = i % mex.size();
		    continue;
		}
	    }
	    else {
		meximized.pb(mex[0]);
		cout<<mex[0]<<endl;
		mex.erase(mex.begin());
		break;
	    }

	}
	for (int i = 0; i < n; i++) cout<< meximized[i]<< ' ';
	cout<<'\n';
    }
}
