#include<stdio.h>

int main(void){ int T; scanf("%d",&T); while(T--){ int colours[4],evens=0 ; for
	(int i = 0; i <4; i++) { scanf("%d",&colours[i]); if (colours[i]%2==0)
		evens ++; } if (evens >2|| evens == 0 || (evens ==1 &&
					colours[0] && colours[1] &&
					colours[2])) printf("YES\n"); else
		printf("NO\n"); } return 0; }
