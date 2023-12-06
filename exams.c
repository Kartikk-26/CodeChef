#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    float x,y,z;
	    scanf("%f %f %f",&x,&y,&z);
	    float a=(z/(x*(y)))*100;
	    if(a>50){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
