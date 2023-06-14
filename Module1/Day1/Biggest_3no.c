#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers to check biggest of it\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2==num3)
    printf("%d = %d = %d", num1, num2, num3);
    else if(num1>num2 && num1>num3)
    printf("%d is the biggest of all three", num1);
    else if (num2 > num1 && num2 > num3)
    printf("%d is the biggest of all three", num2);
    else if(num3>num1 && num3>num2)
    printf("%d is the biggest of all three", num3);

    return 0;
}