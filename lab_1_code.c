#include <stdio.h>
#include <conio.h>
#include <math.h>

int facto(int n)
{

int i = 1, faco = 1;
for (i = 1; i <= n; i++)
faco = faco * i;

return faco;
}


double log_e(double x, int n)
{

double sum = 0;
int i = 0;

for (i = 0; i < n; i++) {

sum = sum + pow(x, 2 * i) / facto(2 * i);
}

return sum;
}


int main()
{
double x;
printf("enter value to calculate cosh");
scanf("%lf",&x);
int k = 10;
    printf("                         500                             \n");
    printf("                       _                          \n");
    printf("                       \\                  2*k  \n");
    printf("                        \\               (x)  \n");
    printf("         cosh(x) ~=                   __     \n");
    printf("                        //                                 \n");
    printf("                       //__           (2*k)!            \n");
    printf("                          k=0                             \n");
   
printf("cosh(%lf)~ %lf  ", x,log_e(x, k));

return 0;
}
