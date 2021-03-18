#include<stdio.h>
#define mod (int) 1e9 + 7
int main(void){
	printf("%d\n\n", mod);
	int n, m;
	long long int fact = 1, pot = 1;
	scanf("%d %d", &n, &m);
	//pot <<= m;
	for (int i = 1; i < n + 1; i++){
		fact = (i * fact) % mod;
		if (i <= m +1) pot = (2 * pot) % mod;
	}
	printf("%lli\n", fact);
	printf("%lli", (fact /pot) % (1000000007));
	return 0;
}
