/* find the reverse of the array*/
#include <stdio.h>
int main()
{
    int i,j,a[10],b[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<n;i++)
    {
         b[i]=a[n-i-1];
        printf("%d ",b[i]);
    }
    
}

