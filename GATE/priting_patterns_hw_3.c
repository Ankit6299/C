#include <stdio.h>

void main(){
    int r=5;
    for(int l=1; l<=5; l++){
        for(int c=1; c<=r; c++){
            printf("%d",c);
        }
        r=r-1;
        printf("\n");
    }
}