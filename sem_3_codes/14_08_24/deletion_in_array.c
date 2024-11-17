#include <stdio.h>
int main() {
    int result_arr[5];
    int pos = 3;
    int arr[5] = {1,2,3,4,5};
    int arrSize = 5;
    
    for (int i=pos-1;i<arrSize-1;i++){
        arr[i] = arr[i+1];
    }
    
    for (int i=0;i<arrSize-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}