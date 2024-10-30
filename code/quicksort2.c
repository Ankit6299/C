#include <stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp; 
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] < pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}

void qs(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        qs(arr,low,pi-1);
        qs(arr,pi+1,high);
    }
}

int main(){

    int arr[] = {4,2,5,3,1};
    int size = 5;

    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }

    qs(arr,0,size-1);

    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}