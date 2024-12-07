// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int Num;
    printf("Enter the number : ");
    scanf("%d",&Num);
    for(int i=1;i<=10;i++)
    {
    printf("%d x %d = %d\n",Num,i,Num*i);}
    return 0;
}