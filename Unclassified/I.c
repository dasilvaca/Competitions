#include<bits/stdc++.h>

using namespace std;

typedef struct complex{
        int real, i;
};

complex compute(int a, int b){
        if (b % 4 == 0) return a, 0;
        else if( b % 2 == 0) return - a, 0;
        else if (b % 4 == 1) return a, 1;
        else return -a, 1;

};

int main(){
        int a, b;
        cin>>a>>b;
        do{
                int c = compute(a, b);
                string k = c.i?"i":"";
                cout<<c<<k<<endl;
                cin>>a>>b;
        } while(a||b);

}