/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rows = 2;
    int cols = 2;
    int matrix[10][10] = {{1,2},{3,4}};
    int transpose[10][10];
    
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ",matrix[i][j]);
            if(j==rows-1){
                printf("\n");
            }
        }
    }
    
    printf("\n");
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
        transpose[j][i] = matrix[i][j];
        }
    }
    
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ",transpose[i][j]);
            if(j==rows-1){
                printf("\n");
            }
        }
    }
    return 0;
}