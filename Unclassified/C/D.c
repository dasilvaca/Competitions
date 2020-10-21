#include<stdio.h>

int main(void){
	short int t= getchar_unlocked();
	//scanf("%d",&t);
	for(int T=0;T<t;T++){
		long long int input = getchar_unlocked();
		//scanf("%d",&input);
		long long int sum = 0;
		if(input%2==0){

			for(long long int n =1; n<input;n++){
				if((input%n) == 0)
				sum = sum + n;
			}
			if(sum < input){
				printf("deficient\n");
			}
			else if (sum > input){
				printf("abundant\n");
			}
			else{
				printf("perfect\n");
			}
			
		}
	}
	return 0;
};
