#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[3],b[3],i,j,max1=0,max2=0;
        for(i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<3;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3-i-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    int c = a[j];
                    a[j] = a[j+1];
                    a[j+1] = c;
                }
                if(b[j]<b[j+1])
                {
                    int c = b[j];
                    b[j] = b[j+1];
                    b[j+1] = c;
                }
            }
        }
        for(i=0;i<3;i++)
        {
            // cout<<a[i]<<b[i]<<endl;
            max1 = max1*10+a[i];
            max2 = max2*10+b[i];
        }
        // cout<<max1<<max2;
        if(max1>max2)
        {
            printf("Alice\n");
        }
        else if (max1<max2)
        printf("Bob\n");
        else
        printf("Tie\n");
    }
	return 0;
}
