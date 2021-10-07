// C program to check wheather a number is palindrome or not
//Palindrome - number written in forward or backward are same
//e.g- 151 in reverse is also = 151, hence palindrome.
#include<stdio.h>

void main(){
    int n,OriginalN,Remainder,ReversedN;

    printf("Enter a number to check wheather it is palindrome or not\n");
    scanf("%d",&n);
  OriginalN=n;

    while(n!=0){
        
        // Checking and storing the number in reversed order
        Remainder=n%10;
        ReversedN = ReversedN *10+Remainder;
        n/=10;
    }
    if (ReversedN==OriginalN)
    {
        printf("It is a palindrome number\n");
    }
    else{
        printf("It is not a palindrome number\n");
    }
}
