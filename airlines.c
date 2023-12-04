#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,n;
	    scanf("%d %d",&x,&n);
	    int a=n/100;
	    int diff=x*100;
	    int diff1=n%100;
	    if(diff>=n){
	        printf("0\n");
	    }
	    else if(diff1!=0){
	        printf("%d\n",(a-x)+1);
	    }
	    else if(diff<n){
	        printf("%d\n",a-x);
	    }
	    
	}
	
	return 0;
}

