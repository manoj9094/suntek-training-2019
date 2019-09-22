/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int i,j,a[100][100],k=0,n,s=1;
    scanf("%d",&n);
    for(k=0;k<n;k++){
    for(j=0+k,i=0+k;i<n-k;i++)
    {
    a[j][i]=s;
    s++;
    }
    for(i=n-k-1,j=0+k+1;j<n-k-1;j++)
    { 
    a[j][i]=s;
   s++;
    }
    for(j=n-k-1,i=n-k-1;i>0+k;i--)
    { 
    a[j][i]=s;
   s++;
    }
    for(j=n-k-1,i=0+k;j>0+k;j--)
    {
        
    a[j][i]=s;
    s++;
    }
    }
    
    
    for(int i=0;i<n;i++){
    
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);}
    return 0;
}
