#include <stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while (t--){
        int i,n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
         for( i=0 ;i<=n;i=i+2)
        {
            if (a[i]=='0'&&a[i+1]=='0'){
                printf("A");

            }
             if (a[i]=='0'&&a[i+1]=='1'){
                printf("T");

            }
             if (a[i]=='1'&&a[i+1]=='0'){
                printf("C");

            }
            if (a[i]=='1'&&a[i+1]=='1'){
                printf("G");

            }
           
        }
        printf("\n");
        
    }
    


}