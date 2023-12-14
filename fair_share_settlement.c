#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int number=b+1;
	    int split=a/number;
	    int diff=a-(split*b);
	    printf("%d\n",diff);
	    }
	return 0;
}

