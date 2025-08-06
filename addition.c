#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int num1,num2,sum;
    printf("Enter First number :");
    scanf("%d",&num1);
    printf("Enter Second number :");
    scanf("%d",&num2);
    sum = add(num1,num2);
    printf("Addition of two number is :%d\n",sum);
    return 0;
}