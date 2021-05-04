#include<stdio.h>
#include<stdlib.h>

int receculid(int m,int n);
int itteculid(int m,int n);

void main()
{
        int m,n,gcd,ch;
        printf("Enter two positive number :\n");
        scanf("%d%d",&m,&n);
        printf("\nenter the choice :1.recursive GCD \t 2. itterative GCD \t 3.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: gcd=receculid(m,n);
                    printf("GCD = %d",gcd);
                    break;
            case 2: gcd=itteculid(m,n);
                    printf("GCD = %d",gcd);
                    break;
            default:exit(0);
        }
}

int receculid(int m,int n){
    int r;
    if(n==0)
    {
        return m;
    }
    r=m%n;
    m=n;
    n=r;
    return receculid(m,n);
}

int itteculid(int m,int n)
{
    int r;
    while(n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}
