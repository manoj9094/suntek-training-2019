#include <stdio.h>
 
int main()
{
	int a[10], F[10], i, j, m, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
    	scanf("%d", &a[i]);
    	F[i] = -1;
   	}     
 
	for (i = 0; i < n; i++)
	{
		m = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])
    		{
    			m++;
    			F[j] = 0;
    		}
    	}
    	if(F[i] != 0)
    	{
    		F[i] = m;
		}
	}

 	printf("\n Frequency of Elements in this Array are : \n");
 	for (i = 0; i < n; i++)
  	{
  		if(F[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", a[i], F[i]);
		}		
  	}	     
 	return 0;
}
