#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	for (int T=0; T<t;T++){
		unsigned int size;
		scanf("%u",&size);
		int max[5]={0};
		int ct_max=0;
		int min[5]={0};
		int ct_min=0
		char pos;
		int ans;
		int ActNum=0;
		do{scanf("%d%c",&ActNum,&pos){
			if (ActNum > 0 && ActNum > num[0]){
				max[4]=max[3];
				max[3]=max[2];
				max[2]=max[1];
				max[1]=max[0];
				max[0]=ActNum;
				ct_max++;
			}
			else if(ActNum<0 && ActNum < min[0]){
				min[4]=min[3];
				min[3]=min[2];
				min[2]=min[1];
				min[1]=min[0];
				min[0]=ActNum;
				ct_min++;
			}
		}while(pos !='\n');

		if (ct_min + ct_max < 5 || (ct_min >=5 && ct_min < max)){
			printf("%d",0);}
		else if(ct_min % 2 == 0){
			printf("%d",
		}
		
	}
	return 0;
}
