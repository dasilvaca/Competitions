#include<stdio.h>

int main(void){
	char T;
	scanf("%d",T);
	for (char t; t<T;t++){
		int n;
		int k;
		scanf("%d %d",n, k);
		int medicines[n][2];
		for (int i = 0;i<n;i ++)
			scanf("%s %d",medicines[i][0],medicines[i][1]);
		for(int j = 0;j<k;j++){



