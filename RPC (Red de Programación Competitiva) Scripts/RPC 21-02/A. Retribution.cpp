#include<bits/stdc++.h>

#define epsilon 1e-6;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define infinity numeric_limits<int>::max();

using namespace std;

long long int pow2(int a){
    return a * a;
}

long double sumMinDistance(vector<pair<int, int>> &pers, int &n, vector<pair<int, int>> &obj, int &k){
    long double sum = 0;
    for(int i = 0; i < n; i++){
	long double min_Distance = infinity;
	for(int j = 0; j < k ; j++){
	    long double distance = sqrt(pow2(pers[i].first - obj[j].first) + sqrt(pow2(pers[i].second - obj[j].second)));
	    min_Distance = min_Distance > distance ? distance : min_Distance;
	}
	sum+=min_Distance;
    }
    return sum;
}

void input(int &k, vector<pair<int, int>> &obj){
    for (int i = 0; i < k; i++){
	pair<int, int> in;
	cin>> in.first>> in.second;
	obj.push_back(in);
    }
}

void output(int &k, vector<pair<int, int>> &obj){
    for (int i = 0; i < k; i++){
	cout<<endl<<obj[i].first<<' '<<obj[i].second<<endl;
    }
}

int main(){
    int n, m, p;
    vector<pair<int, int>> judges, tars, feathers;
    cin>>n>>m>>p;
    input(n, judges);
    input(m, tars);
    input(p, feathers);
    double sum = sumMinDistance(judges, n, tars, m) + sumMinDistance(judges, n, feathers, p);
    cout<<sum<<'\n';
}
