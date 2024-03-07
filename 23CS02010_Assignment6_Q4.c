#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a1[10],a2[10],m,n,count=0;
    bool a3[10];
    printf("size of first array: ");
    scanf("%d",&m);
    printf("Enter the elements of first array: ");
    for(int i=0;i<m;i++) {
        scanf("%d",&a1[i]);
        a3[i]=1;
    }
    printf("size of second array: ");
    scanf("%d",&n);
    printf("Enter the elements of second array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a2[i]);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if((a2[i]==a1[j]) && a3[j]) {
                a3[j]=0;
                count++; 
                break; }
        }
    }
    if(count==n)
        printf("Array 2 is a subset of array 1.");
    else
        printf("Array 2 is not a subset of array 1.");
    return 0;
}