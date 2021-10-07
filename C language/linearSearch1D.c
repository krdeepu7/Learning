//Linear search in 1D arrey
#include<stdio.h>
  
void main()
{
    
    int a[20],i,x,n;
    printf("How many elements?\n");
    scanf("%d",&n);
     
     //storing values
    printf("Enter array elements:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:\n");
    scanf("%d",&x);
     
     //performing search
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<=n)
        printf("Element found at index %d\n",i);
    else
        printf("Element not found\n");
  

}

