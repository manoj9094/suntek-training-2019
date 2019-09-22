#include<stdio.h>
 
int main()
{
    char s[80], s1[10];
    int c1 = 0, c2 = 0, i, j,k;
 
    printf("Enter a string:");
    gets(s);
    printf("Enter a substring:");
    gets(s1);
    while (s[c1] != '\0')
        c1++;
    while (s1[c2] != '\0')
        c2++;
    for (i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            k = 1;
            if (s[j] != s1[j - i])
            {
                k= 0;
                break;
            }
        }
        if (k == 1)
            break;
    }
    if (k == 1)
        printf("PRESENT");
    else
        printf("NOT PRESENT");
 
    return 0;
}