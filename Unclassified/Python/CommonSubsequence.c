#include<stdio.h>

int main(void){
    char A[100000];
    char B[100000];
    int l = 0;
    scanf("%s %s", &A, &B);
    printf("%s %s", A, B);
    while (A[l]!= '\0'){
        l++;
    }
    printf("%d", l);
    
    return 0;
}