#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    return (n == 0 || n == 1) ? 1 : factorial(n-1) * n; 
}

int main(){
    int n, f = 1;
    cin>>n;
//    for (int i = 1; i <= n; i ++){
//	f *= i;
//    }
    f = factorial(n);
    cout<<f;
    
}
