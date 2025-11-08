#include<stdio.h>

int main()
{
    
    int n,i,flag=0;
    printf("enter a no.");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime");
        return 0;
    }

    
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("number is prime");
    }
    else{
        printf("number is not prime ");
    }
    return 0;
}