/*print the pattern */
#include <stdio.h>
int main()
{
    int i, j,n,p;
    printf("no of lines ");
    scanf("%d",&n);
    scanf("%d",&p);
    if(p==1)
    {
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    }
    else if(p==2)
    {
        for(i=n-1; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    }
    else if(p==3)
    {
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
           
            if(i==1 || i==n || j==1 || j==n || i==j || j==(n - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else
    {
        printf("nothing going to be print");
    }
    return 0;
}
