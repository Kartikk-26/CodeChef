#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int a=x/y;
	    if(a>20){
	        printf("20\n");
	    }
	    else{
	        printf("%d\n",a);
	    }
	}
	return 0;
}
