#include <stdio.h>

int main() {
    int arr1size = 3, arr2size = 3, arr_resultsize, i, j;

    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};

    arr_resultsize = arr1size + arr2size;
    int mergedarr[arr1size+arr2size];

    for (i=0;i<arr1size;i++) {
        mergedarr[i] = arr1[i];
    }
    for(i=0,j=arr1size;i<arr2size && j<arr_resultsize;i++,j++) {
        mergedarr[j] = arr2[i];
    }
    for (i=0;i<arr_resultsize;i++){
        printf("%d ",mergedarr[i]);
    }
    return 0;
}
