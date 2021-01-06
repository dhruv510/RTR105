#include<stdio.h>
void function1()
{
    printf("hello fuction1\n");
}

void function2(int a)
{
    printf("hello %d\n",a);
}

int function3()
{
    printf("hello fuction3 ");
    return 4;
}

int function4(int a)
{
    printf("hello %d",a);
    return a;
}



int main()
{
 int a=4;
 function1();

 function2(a);

 printf("%d\n",function3());

 printf("%d\n",function4(a));
}
