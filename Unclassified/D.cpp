#include<bits/stdc++.h>

using namespace std;

int main(){
  string s, a;
  char k;
  cin>>a;
  k = a[a.length() -1];
  while (cin>>s){

    if(s[0] == ',' || s[0] == '.' || s[0] == '!' || s[0] == '?') a += + ' ' s[0] + ' ';
    //for (int i = 1; i < a.length(); i++) a += s[i];
    a+= substr(1,a.length()-1);

  }
  cout<< a;
}
