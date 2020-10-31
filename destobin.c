#include<stdio.h>
void binary(int n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
    {
        if(n&i)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

int main(void)
{
    int num;
    scanf("%d",&num);
    binary(num);
}
