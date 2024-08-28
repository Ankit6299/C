#include <stdio.h>

int avg(int marks[],int a){
    int sum =0,i,average;
    
    for(i=0;i<a;i++){
        sum = sum+marks[i];
    }
    average = sum/a;
    return average;
}
void main()
{
    int marks[5] ={10,15,20,30,45};
    int average;
    average = avg(marks,5);
    printf("%d",average);
}
