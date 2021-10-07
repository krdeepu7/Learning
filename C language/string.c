// C program for performing string operations
#include<stdio.h>
#include <string.h>
int main(){
    char string1[20],string2[20],string3[20];

    int len1,len2,cmp;

    printf("Enter any two string\n");
    scanf("%s%s",string1,string2);

    printf("Entered strings are :%s\t%s\n",string1,string2);
    len1=strlen(string1);
    len2=strlen(string2);
    cmp=strcmp(string1,string2);
    strcpy(string3,string1);
    strcat(string1,string2);
    if(cmp==0)
    {
        printf("string are equal\n");
    }
    else {
        printf("String are not equal\n");
    }
    printf("Length of string are string1=%d and string2=%d\n",len1,len2);
    printf("After string copy :%s\n",string3);
    printf("After string concatenation :%s\n",string1);


return 0;
}