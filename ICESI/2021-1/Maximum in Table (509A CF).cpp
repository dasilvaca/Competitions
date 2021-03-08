#include<bits/stdc++.h>

using namespace std;

int max_n(int n){
    int arr[n][n];
    fill(*arr,*arr + n * n, 1);
    for (int i = 1; i < n; i++){
	for (int j = 1; j < n; j++){
	    arr[i][j] = arr[i-1][j] + arr[i][j-1];
	    //cout<< arr[i][j]<<' ';
	}
	//cout<<'\n';
    }
    return arr[n-1][n-1];

}

int main(){
    int n;
    cin>>n;
    cout<<max_n(n); 
}
