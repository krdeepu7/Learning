// C program to perform a transpose of a matrix using function.
#include <stdio.h>

//int a[10][10], transpose[10][10], r, c, i, j;

int main() {
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns:\n ");
    scanf("%d %d", &r, &c);

    scanMat(a, r, c, j, i);
    displayMat(a, r, c, j, i);
    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    displayMat2(a, r, c, j, i,transpose);
}
void scanMat(int a[10][10], int r, int c, int j, int i){
// Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element A(%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }


}
 void displayMat(int a[10][10], int r, int c, int j, int i){
 // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
}
 void displayMat2(int a[10][10], int r, int c, int j, int i, int transpose[10][10]){
   // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
}