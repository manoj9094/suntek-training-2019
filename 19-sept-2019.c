#include <stdio.h>

int main()
{
 int a[10][10],r,c,i,j,b[10][10],m[10][10];
 scanf("%d",&r);
 scanf("%d",&c);
  printf("enter");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;c++)
     {
        
         scanf("%d",&a[i][j]);
     }
     
 }
  printf("enter");
  for(i=0;i<r;i++)
 {
     for(j=0;j<c;c++)
     {
        
         scanf("%d",&b[i][j]);
     }
     
 }
  for(i=0;i<r;i++)
 {
     for(j=0;j<c;c++)
     {
         m[i][j]=a[i][j]+b[i][j];
     }
     
 }
 printf("results is ");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;c++)
     {
         printf("%d",a[i][j]);
         printf("%d",b[i][j]);
         
         printf("%d",m[i][j]);
     }
     
 }

    return 0;
}