#include<bits/stdc++.h>

using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using vi=vector<int>;
#define pb push_back
typedef long long ll;

int main(){
    	fast_io;
	int nstudents, subjects;
	set <int> max_i;
	scanf("%d %d", &nstudents, &subjects);
	char students[nstudents][subjects];
	for (int i=0;i<nstudents;i++){
		scanf("%s", students[i]);
	}
	for (int j = 0; j<subjects;j++){
		int max = 0;
		for (int i = 0; i<nstudents;i++) if (students[i][j] >= max) max = students[i][j];
		for (int i = 0; i<nstudents;i++)if (students[i][j]==max) max_i.insert(i);
	}
	cout<<max_i.size();
	return 0;


}
