//practical 19 part 2
#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=(n/2)+1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (i==1)
                printf("%d",j);
            else if (i==j||i+j==n+1)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("maitry chapadia_25ce013");
    return 0;
}
