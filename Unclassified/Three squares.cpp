#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n, a, count = 0;
    cin>>m>>n>>a;
    if (! (m-a > 0) && ! (n - a > 0)) count = 1;
    else{
        //count += (m-a) ? m /a : 0; //+ (m - a > 0 ? 1 : 0);
        //count += (n-a) ? n/a : 0; // + (n - a > 0 ? 1 : 0);
        count += ((m-a) ? m/a : 0) + (m%a ? 1 : 0);
        count += ((n-a) ? n/a : 0 )+ (m%a ? 1 : 0);
    }
    //count = count ? count : 1;
    cout << count;

}
