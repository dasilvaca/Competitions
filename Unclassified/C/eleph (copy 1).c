#include<stdio.h>
#include<math.h>



int main(void){
	int sum=0, count = 0,c_char = 0;
	char c='\0';
	int number[4]= {0,0,0,0};
	while ((c = getchar()) != EOF){
		int temporalNumber = 0;
		if (c >= '0' && c <= '9'){
			number[c_char] = c - 48;
			c_char++;

		}
		else{
			for(int i = 0; i<c_char;i++){
				temporalNumber+= number[c_char] * pow(10,4-c_char);
			}
			sum += temporalNumber;
			count++;
			c_char = 0;
			int number[4]= {0,0,0,0};
		}
	}
	printf("%d", sum/count);
	return 0;
}

