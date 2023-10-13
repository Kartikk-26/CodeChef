#include <stdio.h>

int main(void) {
	int x;
	scanf("%d",&x);
	if(x<3){
	    printf("GOLD");
	}
	else if(x>=3&&x<6){
	    printf("SILVER");
	}
	else if(x>=6){
	    printf("BRONZE");
	}
	return 0;
}

