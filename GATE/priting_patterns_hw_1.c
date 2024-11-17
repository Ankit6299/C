#include <stdio.h>

void main(){
    for(int l=1; l<=7; l++){
        if(l<=4){
            for(int c=1; c<=l; c++){
                printf("%d",l);
            }
        }else{
            for(int c=7; c>=l; c--){
                printf("%d",l);
            }
        }
        printf("\n");
    }
}