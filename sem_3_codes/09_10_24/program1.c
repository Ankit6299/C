#include <stdio.h>

void f(int *p, int *q){
    p = q; //O(1)
    *p=12; //
}
int i=0, j=1;

int main(){
    f(&i,&j);
    printf("%d %d",i,j);
    return 0;
}