// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int Num1,Num2;
    printf("Enter the value of Num1 : ");
    scanf("%d",&Num1);
    printf("Enter the value of Num2 : ");
    scanf("%d",&Num2);
    void calculate(int x ,int y)
    
    {
        printf("The summation is : %d \n",(x+y));
        printf("The Differnce is : %d \n ",(x-y));
        printf("The Remainder is : %d \n ",(x/y));
        printf("The Quoteint is : %d \n",(x%y));
        
    }
    calculate (Num1,Num2);
    return 0;
}