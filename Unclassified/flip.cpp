#include<bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
  fast_io;
  int t;
  cin>>t;
  while(t--){
    int n, o =0;

    cin>>n;
    n= n ^ (n-1);
    while (n) {
      if(n&1) o++;
      n >>= 1;

    }

    cout<<o<<'\n';
    cout<<"xd, si funciona"<<endl;
  }
}
