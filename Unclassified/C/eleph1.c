#include<stdio.h>

int main (void){
	int sum=0, count = 0,c_char = 0;
	int c;
	while (scanf("%d",&c)){
		sum +=c;
		c++;
	}
	printf("%d", sum/c);
	return 0;
}

