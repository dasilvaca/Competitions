#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
        fast_io;
        long long int a, b;
        cin>>a>>b;
        do{
                if (b % 4 == 0) {
                b = 0;
                }
                else if( b % 2 == 0){
                a = -a;
                b = 0;
                } 
                else if (b % 4 == 1){
                        b = 1;
                }
                else {
                        a = -a;
                        b = 1;
                }
                string k = b?"i":"";
                cout<<a<<k<<endl;
                cin>>a>>b;
        } while(a||b);

}
