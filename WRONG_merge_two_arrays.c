/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Merge of Two Array 
#include <stdio.h>

int main()
{
    int aSize = 3;
    int bSize = 4;
    int cSize;
    cSize = aSize+bSize;
    int c[cSize];
    int i,j;
    
    int a[3]={2,3,4};
    int b[4]={6,7,10,11};
    
    for (i=0;i<aSize;i++) {
        c[i] = a[i];
    }
    for (j=0;i<aSize;i++) {
        c[i] = a[i];
    }
    
    for (i = 0, j = aSize; j < cSize && i < aSize; i++, j++) {
        c[j] = b[i];
    }
 
    for (int i = 0; i < cSize; i++) {
        printf("%d ", c[i]);
    }
    return 0;
    
}