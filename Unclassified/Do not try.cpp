#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int q, i, a, k;
  char c;
  cin>>s>> q;
  while(q--){
    cin>>i>>a>>k>>c;
    for(int j = 0; j <= k; j++) s[i + (a*j) - 1] = c;
  }
  cout<<s;
}
