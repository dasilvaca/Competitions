#include<bits/stdc++.h>

using namespace std;

int min(map <char, int> l){
    int min_ = 1e6;
    for (auto p : l){
	if( p.second < min_) min_ = p.second;
    }
    return min_;
}

int main(){
    string k;
    cin>>k;
    map<char, int> letters = {{'B', 0}, {'u', 0}, {'l', 0}, {'b', 0}, {'a', 0}, {'s', 0}, {'r', 0}};
    //int b = 0, u = 0, l = 0, b = 0, a = 0, s = 0, r = 0;
    for(int i = 0; i < k.size(); i++){
	char c  = k[i];
	if (c == 'B') letters['B']++;
	else if (c == 'u') letters['u']++;
	else if (c == 'l') letters['l']++;
	else if (c == 'b') letters['b']++;
	else if (c == 'a') letters['a']++;
	else if (c == 's') letters['s']++;
	else if (c == 'r') letters['r']++;
    }
    letters['a']/=2;
    letters['u']/=2;
    int arr[3] = {1, 2 ,3};
    int x = min(letters);
    cout<<x;
}
