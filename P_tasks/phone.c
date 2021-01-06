#include<stdio.h>


int main(void)
{
    unsigned long long a,b;
    printf("enter a and b   \n");
    scanf("%llu%llu",&a,&b);
    unsigned long long c=a*b;
    printf("result of a*b is= %llu",c);
}
