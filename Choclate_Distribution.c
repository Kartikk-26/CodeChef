#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int nums=n%2;
	    if(nums==0){
	        printf("%d %d\n",(n/2),n);
	    }
	    else{
	        printf("%d %d\n",((n/2)+1),n);
	    }
	    
	}
}

