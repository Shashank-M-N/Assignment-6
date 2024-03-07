#include<stdio.h>
#include<math.h>

int isprime(int n) {
    int a=1;
    for(int i=2;i<sqrt(n)+1;i++)
        if(n%i==0) {
            a=0;
            break;
        }
    if(a==1)
        return 1;
    else
        return 0;
}

int main()
{
    int l,h;
    printf("Enter the lower limit :");
    scanf("%d",&l);
    printf("Enter the higher limit :");
    scanf("%d",&h);
    printf("The prime numbers between %d and %d are \n",l,h);
    for(int i=l;i<h;i++)
        if(isprime(i)==1 && i>1)
            printf("%d\t",i);
    return 0;
}