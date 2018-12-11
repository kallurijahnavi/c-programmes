#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,num,sum;
    printf("enter the number to be checked \n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        temp=n%10;
        n=n/10;
        sum=sum+pow(temp,3);
        
    }
    if(num==sum)
        printf("\n tyhe entered number is an armstrong no.\n");
        else 
        printf("\n it is not an armstrong number\n");
return 0;
}