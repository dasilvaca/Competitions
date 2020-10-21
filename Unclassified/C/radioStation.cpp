#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n,m;
	scanf("%d %d", &n,&m);
	map<string,string> dic;
	string ip, id;
	while (n--){
		cin >> id>> ip;
		dic[ip] = id;
	}
	while(m--){
		cin>>id>>ip;
		cout<<id<< ' '<<ip<< " #";
		ip.pop_back();
		cout<<dic[ip]<<endl;
	}
	return 0;
}
