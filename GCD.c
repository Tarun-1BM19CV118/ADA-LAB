#include<stdio.h>
#include<stdlib.h>

int eucliditt(int x, int y)
{
    int m,n;
    while (y > 0)
    {
        m = x / y;
        n = x - m * y;
        x = y;
        y = n;
    }
    return x;
}

int euclidrec(int x, int y)
{
    if (y == 0)
    return x;
    int q = x / y;
    int r = x - q * y;
    return euclidrec(y, r);
}

int main()
{
    int a,b,ch;
    printf("Enter two positive numbers\n");
    scanf("%d %d",&a,&b);
    printf("1.GCD using Iterative 2. GCD using Recursive\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("GCD of two numbers is %d\n",eucliditt(a,b));
                break;
        case 2:printf("GCD of two numbers is %d\n",euclidrec(a,b));
                break;
        default:exit(0);
    }
    return 0;
}
