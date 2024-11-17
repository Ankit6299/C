#include <stdio.h>

void main(){
    int p=5;
    for(int l=1; l<=5; l++){
        for(int c=5; c>=l ;c--){
            printf("%d",p);
        }
        p=p-1;
        printf("\n");
    }
}