#include<stdio.h>

void numbers(int l, int sum, int a[]) {
    float avg= (float)sum/l;
    for(int i=0;i<l;i++)
        if(a[i]>avg)
            printf("%d ",a[i]);
}

int main()
{
    int l,a[10],sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&l);
    printf("Enter the array:\n");
    for(int i=0;i<l;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    numbers(l,sum,a);
    return 0;
}