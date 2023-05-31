#include<stdio.h>
int main()
{
    float n,i,x,s=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        x=1/i;
        s=s+x;
    }
    printf("%.2f",s);
}
