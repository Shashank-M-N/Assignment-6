#include <stdio.h>

void reverse(int l, int a[], int i)
{
    if (i>=l/2) {
        for (int i = 0; i < l;i++)
            printf("%d ", a[i]);
    }
    else {
        a[i]+=a[l-1-i];
        a[l-1-i]=a[i]-a[l-1-i];
        a[i]-=a[l-1-i];
        reverse(l, a, i+1);
    }
}

int main()
{
    int arr[10], l;
    printf("Enter the size of array: ");
    scanf("%d", &l);
    printf("Enter the array elemets: ");
    for (int i = 0; i < l; i++)
        scanf("%d",&arr[i]);
    reverse(l, arr, 0);
    return 0;
}