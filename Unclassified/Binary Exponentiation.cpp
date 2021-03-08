#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll binaryExp(ll a, ll b){
  ll res = 1;
  while(b){
    if(b & 1) res *= a;
    a *= a;
    b >>= 1;
  }
  return res;
};

int main(){
  ll a, b;
  cin>>a>>b;
  cout<<binaryExp(a,b)<<endl;
}
