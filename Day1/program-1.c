// Online C compiler to run C program online
#include <stdio.h>

int main() {
int age;
printf("enter the age of the person :");
scanf("%d",&age);
if(age>=18&&age<=100)
{
printf(" the candidate is eligible for vote ");
}
else
{
 printf(" the cadidate is not eligible fr vote");
}
    return 0;
}