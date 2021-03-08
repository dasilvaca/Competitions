nclude<bits/stdc++.h>

using namespace std;

int main(){
        int v,t,s,d;
	cin>>v>>t>>s>>d;
        cout<<(!(d >= v*t && d <= v*s)  ? "Yes": "No");
        return 0;
}
