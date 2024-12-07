#include<stdio.h>
int main ()
{
    int amount;
printf(" enter the amount \n");
scanf("%d",&amount);
printf("2000--------------------> %d \n",amount/2000);
amount=amount%2000;
printf("2000--------------------> %d \n",amount/500);
amount=amount%500;
printf("2000--------------------> %d \n",amount/100);
amount=amount%100;
printf("2000--------------------> %d \n",amount/50);
amount=amount%50;
printf("2000--------------------> %d \n",amount/20);
amount=amount%20;
printf("2000--------------------> %d \n",amount/10);
amount=amount%10;
printf("2000--------------------> %d \n",amount/5);
amount=amount%5;
printf("2000--------------------> %d \n",amount/2);
amount=amount%2;
}

