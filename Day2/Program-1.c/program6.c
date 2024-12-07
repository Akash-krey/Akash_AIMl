#include<stdio.h>
int main ()
{
    int Num;
    int count=0
    printf("enter the value of Num :");
    scanf("%d",&Num);
    while(Num!=0)
    {
        Num=Num/10; //Num=125/10=12 -->Num=12/10=1 -->Num=1/10=0
        count++;

        printf("loop executed \n");



    }
    print("%d is the count o digits \n",count); 
}
