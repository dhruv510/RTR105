#include <stdio.h>
main(){
   int a,b,c,d,e,f;

   printf("Enter No 1: ");
   scanf("%d", &a);
   printf("Enter No 2: ");
   scanf("%d", &b);
   printf("Enter No 3: ");
   scanf("%d", &c);

    printf("if you want ascending order then enter 1 otherwise 0..  ");
    int temp;
    scanf("%d",&temp);
    if (a>b) {
            d=a;
            f=b;
        }
    else {
            d=b;
            f=a;
        }
    if (d>c) {
            e=d;
            if(f>c){
            d=f;
            f=c;
            }
    else
            {
            d=c;
            }
        }
   else {e=c;}
    if(temp)
    {
        printf("order: %d , %d , %d \n", f,d,e);
    }
    else
    {
        printf("order: %d , %d , %d \n", e,d,f);
    }




   getch();
}
