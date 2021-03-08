#include <stdio.h>

int pow(int a, int b){
    if (!b) return 1;
    for (int i = 1; i < b; i ++) a *= a;
    return a;
}

int digit(int a, int n){
    int k = pow (10, n);
    if (a >= k) a /= k;
    else return -1;
    while (a > 10) a -= 10;
    return a;

}

int main() {
    //code
    int t, n;
    scanf("%d", &t);
    printf("%d", digit(t, 2));
    while(t--){
        scanf("%d", &n);
        int a[n], k = 1;
        for (int i = 0; i < n; i++) scanf("%d", (a + i));
        for (int i = 0; i <= 18; i ++){
            for(int j = 0; j< n; j++)
        }


    }
    return 0;
}
