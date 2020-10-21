#include<stdio.h>

int main(void){
	int x,y;
	scanf("%d %d", &x, &y);
	while (x != y){
		if (x>y){
		       	x -=y;
		}
		else {
			y-=x;
		}
	}
	printf("%d", x);
	return 0;
}
