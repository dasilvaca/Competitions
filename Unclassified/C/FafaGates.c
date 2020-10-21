#include<stdio.h>

int main(void){
	int n, x=0, y= 0, payment = 0,side=-1;
	scanf("%d",&n);
	char steps[n];
	scanf("%s",steps);
	for (int i = 0; i<n; i++){
		if (steps[i] == 'U'){
			y++;
		}
		else if(steps[i] == 'R'){
			x++;
		}
		if(x>y && side == 0){
			payment ++;
			side = 1;
		}
		else if (x<y && side ==1){
			payment ++;
			side = 0;
		}
		else if(i ==0){
			if (x>y){
				side = 1;
			}
			else{
				side =0;
			}
		}


	}
	printf("%d", payment);
	return 0;
}

