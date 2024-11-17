#include <stdio.h>

int main(){
    
    int pos = 2;
    int elem = 100;
    int size = 5;

    int arr[100] = {27,7,2,1,59};

    for(int i = size-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = elem;

    for(int i = 0; i <= size; i++) 
        printf("%d  ", arr[i]);

    return 0;
}