#include<stdio.h>



int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, o, c, ct = 0;
    char *num;
    scanf("%d", &n);
    while (n) {
      if(n&1) *(num + ct) = '1';//printf("1");//o++;
      else *(num + ct) = '0';//printf("0");//c++;
      n >>= 1;
      ct ++;
    }
    for (int i = 0; i < ct; i++) printf("%c", &(ct + i));
  }

}
