#include<bits/stdc++.h>

using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using vi=vector<int>;
#define pb push_back
typedef long long ll;

int main(){
	fast_io;
	string a;
	string b;
	cin>>a>>b;
	if(a==b) cout<<"="<<endl;
	else{
	    int la=a.length();
	    int lb=b.length();
	    if(la>lb){
	        string numa="";
	        string numb="";
	        for(int i=0;i<la;i++){
	            if(i<lb){
	                if(isalpha(a[i]) && isalpha(b[i])){
	                    if(a[i]>b[i]){
	                        cout<<">"<<endl;
	                        return 0;
	                    }else if(a[i]<b[i]){
	                        cout<<"<"<<endl;
	                        return 0;
	                    }
						else if (numa != "" || numb!=""){
								int auxa= stoi(numa);
								int auxb= stoi(numb);
								if(auxa>auxb){
									cout<<">"<<endl;
									return 0;
								}else if(auxb>auxa){
									cout<<"<"<<endl;
									return 0;
								}
							}
	                }else if(isdigit(a[i]) && isdigit(b[i])){
	                    numa+=a[i];
	                    numb+=b[i];
	                }
	            }else{
	                numa+=a[i];
	            }
	        }
	        int auxa= stoi(numa);
	        int auxb= stoi(numb);
	        if(auxa>auxb){
                cout<<">"<<endl;
                return 0;
            }else if(auxb>auxa){
                cout<<"<"<<endl;
                return 0;
            }
	    }else{
	        string numa="";
	        string numb="";
	        for(int i=0;i<lb;i++){
	            if(i<la){
	                if(isalpha(a[i]) && isalpha(b[i])){
	                    if(a[i]>b[i]){
	                        cout<<">"<<endl;
	                        return 0;
	                    }else if(a[i]<b[i]){
	                        cout<<"<"<<endl;
	                        return 0;
	                    }
						else if (numa != "" || numb!=""){
								int auxa= stoi(numa);
								int auxb= stoi(numb);
								if(auxa>auxb){
									cout<<">"<<endl;
									return 0;
								}else if(auxb>auxa){
									cout<<"<"<<endl;
									return 0;
								}
							}
	                }
					if(isdigit(a[i]) && isdigit(b[i])){
	                    numa+=a[i];
	                    numb+=b[i];
	                }
	            }else{
	                numb+=b[i];
	            }
	        }
	        int auxa= stoi(numa);
	        int auxb= stoi(numb);
	        if(auxa>auxb){
                cout<<">"<<endl;
                return 0;
            }else if(auxb>auxa){
                cout<<"<"<<endl;
                return 0;
            }
	    }
	}
}
