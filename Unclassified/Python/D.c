
#include<stdio.h>


int main(void){
    int t;
    scanf("%d", &t);
    for (int T = 0; T<t;T++){
        int a,b,ct = 0;
        scanf("%d %d", &a, &b);
        if (a<=b){
            ct = ((b-a)/10) ;
        }
        else if (a>b){
            ct = ((a-b)/10) ;
        }
        if ((b-a)%10 != 0){
            ++ct;
        }
        
        printf("%d\n", ct);
        }
    return 0;
}