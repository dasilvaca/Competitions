#include<stdio.h>

unsigned long long int factorial(long long int n){
	if (n == 0)
		return 1;
	else
		return n * factorial(n-1);
}


int main(){
	int input;
	printf("input the number to calculate its factorial: ");
	scanf("%d", &input);
	printf("%d! is %lli\n",input,factorial(input));
} 
