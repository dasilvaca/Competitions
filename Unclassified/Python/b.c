#include<stdio.h>

int main(void){
    unsigned int t;
    scanf("%u", &t);
    for(int T = 0; T<t;T++){
        unsigned int a,b,x,y,n,ct;
        scanf("%u %u %u %u %u", &a, &b, &x, &y, &n);
        if (a>b){
            int c =a , d =b;
            a=d;
            b = c;
        }
        if(a-x >=n){
                //ct += a-x;
                a = x;
                n -= x;
                if (b-y>=n){
                    //ct += b-y;
                    b = y; //Aquí está el ctm error
                }
                else{
                    //ct = b-n;
                    b-=n;
                    n = 0;
                }
            } 
            else{
                //ct += a-n;
                a-=n;
                n =0;

            }
        
        /*

        else{
            if(b-y >=n){
                b-=y;
                //ct += b-y;
                n -= b;
                if (a-x>=n){
                    //ct += a-x;
                    a-=x;
                }
                else{
                    //ct = a-n;
                    a-=n;
                }
            } 
            else{
                b-=n;
                //ct += b-n;
            }
        }
        */
        printf("%u\n", a*b);
    }
}