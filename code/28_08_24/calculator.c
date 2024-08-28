//WAP using fn design a calculator, using fn sum, sub, mul and div pass 2 value
#include <stdio.h>

int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int main()
{
    int n1,n2;
    
    printf("Enter Number 1:");
    scanf("%d",&n1);
    printf("Enter Number 2:");
    scanf("%d",&n2);
    
    printf("The sum of Number is %d\n",sum(1,2));
    printf("The sub of Number is %d\n",sub(1,2));
    printf("The mul of Number is %d\n",mul(1,2));
    printf("The div of Number is %d\n",divi(1,2));
}