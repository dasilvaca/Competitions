#include<bits/stdc++.h>

// #define endl '\n'

using namespace std;

unsigned long long int fast_pow(int a, int b){
    unsigned long long int ans = 1;
    while(b){
        if (a & 1){
            ans *= a;
            b--;
        }
        else{
            a *= a;
            b >>= 1;
        }
    }
    return ans;
}
int main(){
    int a, n;
    while(cin>>a>>n){
        if (!n || a == 1) cout<<"0 1"<<endl;
        else if (!(a & 1) || !(a % 5)){
            
        }
        else cout<<"Precision Error"<<endl;
    }
}
