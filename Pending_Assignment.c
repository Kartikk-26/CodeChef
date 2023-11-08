#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int min=24*60;
        int day=z*min;
        int assign=x*y;
        if(day>=assign){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
	return 0;
}

