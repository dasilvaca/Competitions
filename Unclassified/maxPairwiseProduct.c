#include<stdio.h>
int main(){
	long long int n, a, b;
	scanf("%lli %lli %lli", &n, &a, &b);
	for (int i =0; i < n-2; i++){
		long long int k, *c;
		scanf("%lli", &k);
		if (k > a || k > b){
			c = a > b ? &b : &a;
			*c = k;
		}
	}
	printf("%lli", a*b);
	return 0;
}
