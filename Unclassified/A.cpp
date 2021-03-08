#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string a, b;
    cin>>a>>b;
    int arb[26] = {0}, count = 0;
    for (int i = 0; i < b.length(); i++) arb[b[i] - 'a'] ++;
    for (int i = 0; i < a.length(); i++){
      if (arb[a[i] - 'a']){
        count ++;
        arb[a[i] - 'a'] --;
      }
      else break;
    }
    cout<<count<<"\n";
  }
}
