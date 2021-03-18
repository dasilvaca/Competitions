#include<stdio.h>

int t, n;

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("el número ingresado es: %d y la respuesta fue: ", n);
		while(n >= 2021) {
			if (!(n % 2020)) break;
			n -= 2021;
		}
		printf("%s\n", n % 2020 ? "NO": "YES");
	}
	return 0;
}
