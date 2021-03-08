#include<bits/stdc++.h>

using namespace std;

struct block{
  int sum, ;
}

int main(){
    int n, wdays, q; cin>>n, wdays = n, cin>>q;
    int arr[n+1] = {0};
    while (q--){
        int l, r, k; cin>>l>>r>>k;
        if (k == 1){
            for (int i = l; i <= r; i ++){
                if (arr[i] == 0){
                    arr[i] = 1;
                    wdays --;
                }
            }
        }
        else{
            for (int i = l; i <= r; i ++){
                if (arr[i] == 1){
                    arr[i] = 0;
                    wdays ++;
                }
            }
        }
        cout << wdays<<'\n';
    }


}
