//Sum of first even/odd no. upto the term given
#include <stdio.h>

int main()
{
    int a, sum1 = 0, sum2 = 0;
    printf("Enter the number upto which you want addditon \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("No. is even\n");
        for (int i = 0; i <= a; i = i + 2)
        {
            sum1 += i;
        }
        for (int i = 1; i < a; i = i + 2)
        {
            sum2 += i;
        }

        printf("Sum of first even no. upto %dth term is %d\n", a, sum1);
        printf("Sum of first odd no. upto %dth term is %d\n", a, sum2);
    }
    else
    {
        printf("No. is odd\n");
        for (int i = 1; i <= a; i = i + 2)
        {
            sum1 += i;
        }
        for (int i = 0; i <= a; i = i + 2)
        {
            sum2 += i;
        }
        printf("Sum of first even no. upto %dth term is %d\n", a, sum2);
        printf("Sum of first odd no. upto %dth term is %d\n", a, sum1);
    }
    return 0;
}