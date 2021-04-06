#include<stdio.h>
int main()
{
float x,y,c; float *a,*b;
int z;
printf("\n\t\t\t\tMy 2nd program with MyCaptain (Aviral-Sir)\n");
printf(" please enter number 1: ");
scanf("%f",&x);
printf(" please enter number 2: ");
scanf("%f",&y);
printf("\n press 1 to swap using 3rd variable.\n press 2 to swap without using 3rd variable.\n press 3 to swap using pointers \n ");
scanf("%d",&z);
switch(z)
{
    // using third variable
    case 1: c = x; x = y; y = c;
            printf("\n the numbers after swapping are x = %f and y = %f \n ",x,y);
            break;

    // without using third variable
   case 2: x = x + y; y = x - y; x = x - y;
           printf("\n the numbers after swapping are x = %f and y = %f \n",x,y);
           break;

    // using pointers
   case 3: a = &x; b = &y; c = *a; *a = *b; *b = c;
           printf("\n the numbers after swapping are x = %f and y = %f \n",x,y);
           break;
}
return 0;
}
