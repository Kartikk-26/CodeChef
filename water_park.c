#include <stdio.h>

int main(void) {
	int weight,height;
	scanf("%d %d",&weight,&height);
	if(weight>=60&&height<=130){
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
	return 0;
}

