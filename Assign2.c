#include <stdio.h>
#include <conio.h>


int main()
{
    int fact =1, n;
    printf("Enter the number to find out the factorial\n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        fact = fact *i;
    }
    printf("The factorial of number n = %d\n",fact);
return 0;
}