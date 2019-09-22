
#include <stdio.h>

int main()
{
 int a[10],b[10],i,j=0,n,m;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("enter a number to be check occurance");
 scanf("%d",&m);
 for(i=0;i<n;i++)
 {
     if(m==a[i])
     {
         j++;
         
     }
 }
printf("\n occurance num is %d",j);
    return 0;
}

