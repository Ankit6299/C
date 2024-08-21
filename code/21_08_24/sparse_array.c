/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5][6] = {{0,0,7,0,0,0},{0,0,0,0,0,0},{0,0,0,5,9,0},{0,0,0,0,0,0},{0,2,0,0,0,0}};
    int s[5][3];
    
    // for (int i=0;i<5;i++) {
    //     for (int j=0;j<6;j++) {
    //         printf("%d",a[i][j]);
    //         if (j==5) {
    //             printf("\n");
    //         }
    //     }
    // }
    // for (int i=0;i<4;i++) {
    //     for (int j=0;j<3;j++) {
    //         if (a[i][j]!=0){
    //             printf("%d",a[i][j]);
    //             // if (j==2){
    //             //     printf("\n");
    //             // }
    //         }
    //     }
    // }
    int k=0; 
    for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(a[i][j]!=0)  
            {  
                s[0][k] = i;  
                s[1][k] = j;  
                s[2][k] = s[i][j];  
                k++;
            }  
      }  
    }
    
    for (int i=0;i<4;i++) {
        for (int j=0;j<3;j++) {
            printf("%d",s[i][j]);
            }
        }
    return 0;
}