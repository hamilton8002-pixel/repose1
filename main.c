#include <stdio.h>
int main()
{
    int n,temp,reverse=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
    reverse=reverse*10+temp%10;
    temp=temp/10;
    }
    printf("The reverse of the integer %d is ",n);
    temp=n;
    while(temp%10==0)
    {
        printf("0");
        temp/=10;
    }
    printf("%d",reverse);

    return 0;
}
