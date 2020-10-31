
#include <stdio.h>
main(){
   char a,b,c,d,e,f;

   printf("Enter No 1 char: ");
   scanf(" %c", &a);
   printf("Enter No 2 char: ");
   scanf(" %c", &b);
   printf("Enter No 3 char: ");
   scanf(" %c", &c);

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
        printf("order: %c , %c , %c \n", f,d,e);
    }
    else
    {
        printf("order: %c , %c , %c \n", e,d,f);
    }




   getch();
}
