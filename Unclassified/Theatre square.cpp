#include<bits/stdc++.h>

using namespace std;

int main(){
  long long int m, n, a;
  cin>>m>>n>>a;
  cout<< ((m%a)?(m/a)+1:m/a) * ((n%a) ? n/a + 1: n/a);
}
