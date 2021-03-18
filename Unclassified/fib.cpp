


  #include <bits/stdc++.h>
  #define REP(i,n) for(int i=0; i<n;i++)
  #define pb push_back
  #define ff first
  #define ss second
  #define ii pair<int,int>
  #define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define vi vector<int>
  #define vii vector<ii>
  #define lli long long int
  using namespace std;
  ostream& operator<<(ostream& os, const vector<int> &v){
      for(auto const &i: v){
          os<<i<<" ";
      }
      os<<endl;
      return os;
  }
  const lli mod=((1LL<<31)-1);
  const int N = 1e4+1;
  int main(){
      fast_io;
      cout<<mod<<"este es el mod"<<endl;
      int cases;cin>>cases;
      vector<unsigned long long> fibs;fibs.pb(1);fibs.pb(1);
      for(int i=2; i<N; i++){
          fibs.pb((fibs[i-1]+fibs[i-2])%mod);
      }
      while(cases--){
          unsigned long long n;cin>>n;
          bool flag = false;
          int mid = N/2;
          int izq = 0; int der = N-1; int i=0;
          while(izq<=der && i<N){
              int tmp = fibs[mid]-n%mod;
              if(tmp==0){
                  cout<<"YES"<<endl;flag=true;break;
              }
              else if(tmp<0){
                  izq = mid+1;
                  mid = (izq+der)/2;
              }
              else{
                  der = mid-1;
                  mid = (izq+der)/2;
              }
              i++;
          }
  //        for(int i=0; i<N; i++){
  //            int tmp = fibs[i]-n%mod;
  //            if(fibs[i]-n%mod==0){cout<<"YES"<<endl;flag = true; break;}
  //        }
          if(!flag)cout<<"NO"<<endl;
      }
      //cout<<fibs<<endl;
      return 0;
  }
