// C program for reading and printing 2 matrix
#include<stdio.h>
int main(){
int a[50][50],b[50][50],i,j,k,l,x,y,x1,y1;

printf ("Enter the size Matrix in X,Y Style\n");
scanf("%d%d",&x,&y);

printf("Enter the elements of Matrix\n");

for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the size of 2nd Matrix in X,Y Style\n");
scanf("%d%d",&x1,&y1);

printf("Enter the elements of Matrix\n");
for(k=0; k<x1; k++){
    for(l=0;l<y1;l++){
        scanf("%d",&b[k][l]);
    }
}
// Printing the values
printf("Entered values are:\n");
for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        printf("%d\t",a[i][j]);
        
    }
    printf("\n");
}
printf("Entered the elements of 2nd Matrix\n");
for(k=0; k<x1; k++){
    for(l=0;l<y1;l++){
        printf("%d\t",b[k][l]);
    }
    printf("\n");
}

return 0;
}