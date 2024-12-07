#include<stdio.h>
int main ()
{
    int Num;
    int sum=0;
    int even_count=0;
    int odd_count=0;
    printf("enter the number : ");
    scanf("%d",&Num);
    for( int i=1;i<=Num;i++)
    {
        if(i%2==0)
        {
            even_count++;
            }
            else
            {
                odd_count++;
            }

        
    }
    printf("even count =%d \n",even_count );
    printf("odd count =%d \n",odd_count);
}