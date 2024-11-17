#include <stdio.h>

int main()
{
    int a[4] = {5,9,2,8};
    int b[6] = {3,4,5,1,7,10};
    
    int sizeA = 4;
    int sizeB = 6;
    
    int sizeC = sizeA+sizeB;
    
    int c[sizeA+sizeB];
    
    for (int i=0;i<sizeA;i++) {
        c[i] = a[i];
    }
    
    for (int i=0,j=sizeA;i<sizeB && j<sizeC;i++,j++) {
        c[j] = b[i];
    }
    
    for (int i=0; i<sizeC;i++) {
        printf("%d ",c[i]);
    }
    return 0;
}