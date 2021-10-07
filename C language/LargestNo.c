// C program to find the greatest of 3 numbers
#include<stdio.h>
int main(){

// Declaring variable and it's type
int a,b,c; 

printf("Enter 3 numbers\n");
// Taking Input
scanf("%d%d%d", &a,&b,&c);

// Use of if else loop
if(a>b){
    if(b>c)
    printf("The first input digit is largest which is: %d",a);
}
if(b>c){
    if(b>a)
    printf("Second entered value is the greatest which is : %d",b);
}
else
{
    printf("Third entered digit is gratest which is: %d",c);
}

return 0;
}