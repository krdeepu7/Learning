// Using switch operation to perform different Arithmatic Operations
#include<stdio.h>
int main(){

float a,b,sub,mul,div, add;
int op,mod ;

printf("Enter any two numbers for arithmatic operations\n");
scanf("%f%f",&a,&b);


// Giving the choice 
printf("Enter number 1 for subtration\n Enter number 2 for multiplication\n");
printf("Enter number 3 for division\n Enter number 4 for remainder \n");
printf("Enter number 5 for addition\n");

printf("\nEnter your Choice\n");
scanf("%d",&op);

// It will switch the operation based on choice
switch(op)
{
   case 1:
    sub= a-b;
    printf("Subtraction of number will be :%.2f\n",sub);
    break;

   case 2:
   mul=a*b;
   printf("Multiplication will be :%.2f\n",mul);
   break;

   case 3:
   div=a/b;
   printf("Division will be: %.2f\n", div);
   break;

   case 4:
   mod=(int )a % (int) b;
   printf("Remainder in integer will be:%.2d\n",mod);
   break;

   case 5:
   add= a+b;
   printf("Addition of numbers will be :%.2f\n",add);
   break;

   default :
   printf("Invalid Input\n");


}

return 0;
}
