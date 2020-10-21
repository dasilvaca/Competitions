#include<stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int t = 0; t<T;t++){
        int n;
        scanf("%d", &n);
        char s[1000];
        s[0] = '\0';
        int c = 0;
        for (int i = 0; i<n;i++){
            while(s[c] != '\0'){
                c++;
            }
            scanf("%s", &s[c]);
        }
        printf("%s\n",s);
    }
    return 0;
}