#include<stdio.h>

int main(void){
	int n,k,s,cnt=0;
	scanf("%d %d",&n, &k);
	int a[n];
	for (int i = 0; i<n;i++){
		scanf("%d",&a[i]);
		if (i == k-1){
			s = a[i];
		}
	}
	for (int i = 0; i<n;i++){
		if (a[i]>0 && a[i]>=s){
			++cnt;
		} 
	}
	printf("%d", cnt);
	return 0;
}
