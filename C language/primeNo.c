// C program to check wheather a number is prime or not

#include<stdio.h>
#include<math.h>
int main(){

int a,flag=1,n,i;
printf("Enter a number to check wheather it is prime or not\n");
scanf("%d",&n);

for(int i=2; i<sqrt(n); i++);
    if(n% i==0){
    flag=0;
    }
    if(flag ==0)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    printf("Entered digit is not a prime\n");
    }
else{
        printf("%d is a prime number\n", n);
    }


return 0;
}