#include<bits/stdc++.h>

using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using vi=vector<int>;
#define pb push_back
typedef long long ll;

int main(){
	fast_io;
	int n;
	while(cin>>n){
	        bool stackb = true, queueb =true, pqueueb = true;
	        stack <int> s;
	        queue <int> q;
	        priority_queue <int> pq;
	        while(n--){
			int action;
		    	int x;
		    	cin>>action>>x;
		    	if (action == 1){
				s.push(x);
		    		q.push(x);
		    		pq.push(x);
			}
		    	else if (action == 2){
				if (stackb && !s.empty()){
					if(x == s.top())s.pop();
					else stackb = false;
				}
				else if (s.empty()){
					stackb = false;
				}

				if (queueb && ! q.empty()){
					if(x==q.front()) q.pop();
					else queueb = false;
				}
				else if (q.empty()){
					queueb = false;
				}

				if (pqueueb && ! pq.empty()){
					if(x==pq.top()) pq.pop();
					else pqueueb = false;
				}
				else if (pq.empty()){
					pqueueb = false;
				}
			}
		}
		if ((pqueueb && (queueb || stackb)) || (queueb && (pqueueb || stackb) || (stackb && (queueb || pqueueb)))){
			cout<<"not sure"<<endl;
		}
		else if(stackb){
			cout<<"stack"<<endl;;
		}
		else if(queueb){
			cout<<"queue"<<endl;
		}
		else if(pqueueb){
			cout<<"priority queue"<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
	return 0;
}
