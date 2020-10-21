#include<stdio.h>

int main(void){
	int myarray[248097]={0};
	for(int i; i<248097;i++)
		printf("%d\n",sizeof(myarray));
	return 0;
}
