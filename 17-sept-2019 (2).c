/*c program to print multiplication table*/
#include <stdio.h>
int main()
{
    int i,j,k;
    print("enter the table going to print");
    scanf("%d", &i);
    for(j=1;j<=10;j++)
    {
        k=i*j;
        printf("%d*%d=%d\n",i,j,k);
    }
    

    return 0;
}

